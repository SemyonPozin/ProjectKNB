#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

void writeStoneLeft() {
	using namespace std;
	setlocale(LC_ALL, "");
	char x = 's', c = ' ';
	cout << setw(8) << setfill(c) << c;
	cout << setw(13) << setfill(x) << x << endl;
	cout << setw(5) << setfill(c) << c;
	cout << setw(19) << setfill(x) << x << endl;
	cout << setw(2) << setfill(c) << c;
	cout << setw(25) << setfill(x) << x << endl;
	cout << setw(5) << setfill(c) << c;
	cout << setw(19) << setfill(x) << x << endl;
	cout << setw(8) << setfill(c) << c;
	cout << setw(13) << setfill(x) << x << endl;

}
