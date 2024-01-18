#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

void writeStoneRight() {
	using namespace std;
	setlocale(LC_ALL, "");
	char x = 's', c = ' ';
	cout << setw(91) << setfill(c) << c;
	cout << setw(13) << setfill(x) << x << endl;
	cout << setw(88) << setfill(c) << c;
	cout << setw(19) << setfill(x) << x << endl;
	cout << setw(85) << setfill(c) << c;
	cout << setw(25) << setfill(x) << x << endl;
	cout << setw(88) << setfill(c) << c;
	cout << setw(19) << setfill(x) << x << endl;
	cout << setw(91) << setfill(c) << c;
	cout << setw(13) << setfill(x) << x << endl;

}
