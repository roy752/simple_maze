#include"maze.h"
using namespace std;

int main()
{
	Maze maze;

	maze.read();
	maze.setDisplaySettings();

	while (true)
	{
		maze.display();
		maze.wait();
	}
}