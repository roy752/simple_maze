#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<windows.h>

#define DEFAULT_FRAME 2
#define endl "\n"
#define FILE_NAME "input.txt"

using namespace std;

class Maze
{

public:

	void read();
	void display();
	void wait();
	void setDisplaySettings();


private:

	vector<string> m_map;

	string	m_cursorLiftForRedraw = "\0";
	int		m_mazeHeight		  = 0;
	int		m_mazeWidth			  = 0;
	int		m_frame				  = DEFAULT_FRAME;
};