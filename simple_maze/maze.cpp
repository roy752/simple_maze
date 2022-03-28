#include"maze.h"

void Maze::display()
{
	cout << m_cursorLiftForRedraw;
	for (auto line : m_map) cout << line << endl;
}

void Maze::read()
{
	ifstream file(FILE_NAME);
	string buffer;
	while (getline(file, buffer)) m_map.push_back(buffer);
	file.close();
}

void Maze::wait()
{
	Sleep(1000 / m_frame); /* 1000ms/초당 프레임 */
}

void Maze::setDisplaySettings()
{
	m_mazeHeight = m_map.size();
	m_mazeWidth = m_map[0].size();

	m_cursorLiftForRedraw = "\x1b[" + to_string(m_mazeHeight) + "A";
	
	{//콘솔 창 커서 숨기기
		HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cursorInfo;
		GetConsoleCursorInfo(out, &cursorInfo);
		cursorInfo.bVisible = false;
		SetConsoleCursorInfo(out, &cursorInfo);
	}
}