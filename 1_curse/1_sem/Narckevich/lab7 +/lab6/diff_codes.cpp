#include <iostream>
#include <windows.h>
#include "char_diff.h"
using namespace std;



void diffCodes() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int k;

	cout << "„то вы хотите сделать (1, 2, 3)" << endl;

	cout << "1 Ц определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита, иначевывод сообщени€ об ошибке" << endl;

	cout << "2 Ц определение разницы значений кодов в Windows - 1251 буквы впрописном и строчном написании, если введен символ русскогоалфавита, иначе вывод сообщени€ об ошибке; " << endl;

	cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщени€ об ошибке;" << endl;

	cout << "4 Ц выход из программы. " << endl;

	cout << "¬аш выбор "; cin >> k;
	cin.ignore();

	switch (k) {
	case 1: {
		latinCharDiff();
		break;
	}
	case 2: {
		russianCharDiff();
		break;
	}
	case 3: {
		symbolCharDiff();
		break;
	}
	case 4: {
		break;
	}
	default: {
		cout << "ќЎ»Ѕ ј, такого варианта нет";
		break;
	}
	}
}