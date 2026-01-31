#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void russianCharDiff() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int diff;
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
}