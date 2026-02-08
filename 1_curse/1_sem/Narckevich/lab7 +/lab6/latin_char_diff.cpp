#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void latinCharDiff() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int diff;
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
}