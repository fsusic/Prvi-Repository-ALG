#include "Tocka.h"
#include<string>
#include<sstream>


void Tocka::set_x(int x)
{
	this->x = x;
}

void Tocka::set_y(int y)
{
	this->y = y;
}

string Tocka::coordinates()
{
	stringstream ss;

	ss << "T(" << x << ", " << y << ")";
	return ss.str();
}
