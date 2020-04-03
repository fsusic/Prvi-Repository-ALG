#pragma once
#include<string>

using namespace std;

class Tocka
{
public:
	void set_x(int x);
	void set_y(int y);
	string coordinates();
private:
	int x;
	int y;

};

