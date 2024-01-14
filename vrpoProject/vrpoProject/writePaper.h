#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

void writePaper() {
	setlocale(LC_CTYPE, "Russian"); 
	char p, s; 
	s = ' ';
	p = 'p';
	cout << setw(12) << setfill(s) << s; 
	cout << setw(12) << setfill(p) << p << endl; 
	cout << setw(10) << setfill(s) << s; 
	cout << setw(12) << setfill(p) << p << endl; 
	cout << setw(8) << setfill(s) << s; 
	cout << setw(12) << setfill(p) << p << endl; 
	cout << setw(6) << setfill(s) << s; 
	cout << setw(12) << setfill(p) << p << endl; 
	cout << setw(4) << setfill(s) << s; 
	cout << setw(12) << setfill(p) << p << endl; 
	cout << setw(2) << setfill(s) << s; //устанавливаем ширину поля вывода в 4 символа пробела
	cout << setw(12) << setfill(p) << p << endl; //устанавливаем количество символов для вывода

}
