#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

void writePaperLeft() {
	setlocale(LC_CTYPE, "Russian");
	char p, s;
	s = ' ';
	p = 'p';
	cout << setw(12) << setfill(s) << s;
	cout << setw(18) << setfill(p) << p << endl;


	cout << setw(10) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p;
	cout << setw(2) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p;
	cout << setw(4) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p << endl;


	cout << setw(8) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(4) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p << endl;


	cout << setw(6) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(5) << setfill(s) << s;
	cout << setw(4) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p << endl;


	cout << setw(4) << setfill(s) << s;
	cout << setw(7) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(2) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p << endl;


	cout << setw(2) << setfill(s) << s;
	cout << setw(18) << setfill(p) << p << endl;

}

