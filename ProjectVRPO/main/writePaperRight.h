#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

void writePaperRight() {
	setlocale(LC_CTYPE, "Russian");
	char p, s;
	s = ' ';
	p = 'p';
	cout << setw(92) << setfill(s) << s;
	cout << setw(18) << setfill(p) << p << endl;


	cout << setw(89) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p;
	cout << setw(2) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p;
	cout << setw(4) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p << endl;


	cout << setw(87) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(4) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p << endl;


	cout << setw(85) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(5) << setfill(s) << s;
	cout << setw(4) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p << endl;


	cout << setw(83) << setfill(s) << s;
	cout << setw(7) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(2) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p << endl;


	cout << setw(81) << setfill(s) << s;
	cout << setw(18) << setfill(p) << p << endl;

}
