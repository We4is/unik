#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void symbolCharDiff() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string l;
	cout << "Введите желаемую десятичную цифру или цифры ";
	getline(cin, l);

	for (int i = 0; i < l.length(); i++) {
		if (l[i] >= '0' && l[i] <= '9')
		{
			cout << "Код заданной десятичной цифры Z = " << int(l[i]) << endl;
		}
		else {
			cout << "ОШИБКА, Это не цифра" << endl;
		}
	}
}