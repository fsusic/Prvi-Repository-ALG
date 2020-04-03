#include<iostream>
#include<sstream>
#include<string>
#include "Tocka.h"

using namespace std;

int main() {

	Tocka t;

	int x, y;

	cout << "IZRADA TOCKE!" << endl;

	cout << "Upisite koordinatu na x osi: ";
	cin >> x;
	t.set_x(x);

	cout << "Upisite koordinatu na y osi: ";
	cin >> y;
	t.set_y(y);

	system("cls");

	cout << "IZRADJENA TOCKA: " << t.coordinates();

	



	return 0;
}