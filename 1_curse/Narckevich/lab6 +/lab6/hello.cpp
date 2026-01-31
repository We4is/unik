#include <iostream>
#include <windows.h>
#include <cctype>
#include <string>
#include "hello.h"
using namespace std;



void hello() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int diff, k;

	cout << "Что вы хотите сделать (1, 2, 3)" << endl;

	cout << "1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита, иначевывод сообщения об ошибке" << endl;

	cout << "2 – определение разницы значений кодов в Windows - 1251 буквы впрописном и строчном написании, если введен символ русскогоалфавита, иначе вывод сообщения об ошибке; " << endl;

	cout << "3 – вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщения об ошибке;" << endl;

	cout << "4 – выход из программы. " << endl;

	cout << "Ваш выбор "; cin >> k;
	cin.ignore();

	switch (k) {
	case 1: {
		string l;
		cout << "Введите желаемую букву или несколько букв на латинском языке ";
		getline(cin, l);

		for (int i = 0; i < l.length(); i++) {
			if (l[i] >= 'A' && l[i] <= 'Z' || l[i] >= 'a' && l[i] <= 'z')
			{
				diff = abs(toupper(l[i]) - tolower(l[i]));
				cout << "Разница кодов в ASCII заданной X латинского алфавита в прописном и строчном написании = " << diff << endl;
			}
			else {
				cout << "ОШИБКА, Это не латинская буква" << endl;
			}
		}
		break;
	}
	case 2: {
		string l;
		cout << "Введите желаемую букву или буквы на русском языке ";
		getline(cin, l);

		for (int i = 0; i < l.length(); i++) {
			if (l[i] >= 'А' && l[i] <= 'я')
			{
				diff = abs(toupper(l[i]) - tolower(l[i]));
				cout << "Разница кодов в Windows-1251 заданной Y русского алфавита в прописном и строчном написании = " << diff << endl;
			}
			else {
				cout << "ОШИБКА, Это не русская буква" << endl;
			}
		}
		break;
	}
	case 3: {
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
		break;
	}
	case 4: {
		break;
	}
	default: {
		cout << "ОШИБКА, такого варианта нет";
		break;
	}
	}
}