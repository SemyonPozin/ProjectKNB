#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

void writeScissorsRight() {
	setlocale(LC_CTYPE, "Russian");
	char p, s;
	s = ' ';
	p = 'ñ';
	cout << setw(90) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p;
	cout << setw(10) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p << endl;

	cout << setw(93) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(7) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p << endl;

	cout << setw(95) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(5) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p << endl;

	cout << setw(97) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(2) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p << endl;

	cout << setw(99) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p << endl;

	cout << setw(97) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(2) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p << endl;

	cout << setw(95) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(5) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p << endl;

	cout << setw(93) << setfill(s) << s;
	cout << setw(2) << setfill(p) << p;
	cout << setw(7) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s;
	cout << setw(1) << setfill(p) << p << endl;

	cout << setw(90) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p;
	cout << setw(10) << setfill(s) << s;
	cout << setw(3) << setfill(p) << p << endl;
}
