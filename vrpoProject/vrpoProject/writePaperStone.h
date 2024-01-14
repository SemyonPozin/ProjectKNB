#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

void writePaperStone() {
	using namespace std;
	setlocale(LC_ALL, "");
	char x = 's', c = ' ';

	cout << setw(8) << setfill(c) << c;
	cout << setw(13) << setfill(x) << x;
	cout << setw(20) << setfill(c) << c;
	cout << setw(12) << setfill(x) << x << endl;

	cout << setw(5) << setfill(c) << c;
	cout << setw(19) << setfill(x) << x;
	cout << setw(15) << setfill(c) << c;
	cout << setw(12) << setfill(x) << x << endl;

	cout << setw(2) << setfill(c) << c;
	cout << setw(25) << setfill(x) << x;
	cout << setw(10) << setfill(c) << c;
	cout << setw(12) << setfill(x) << x << endl;

	cout << setw(5) << setfill(c) << c;
	cout << setw(19) << setfill(x) << x;
	cout << setw(11) << setfill(c) << c;
	cout << setw(12) << setfill(x) << x << endl;

	cout << setw(8) << setfill(c) << c;
	cout << setw(13) << setfill(x) << x;
	cout << setw(12) << setfill(c) << c;
	cout << setw(12) << setfill(x) << x << endl;

	cout << setw(31) << setfill(c) << c;
	cout << setw(12) << setfill(x) << x << endl;
}
