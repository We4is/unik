#include <iostream>
using namespace std;

//2. Дана строка символов, состоящая из произвольных десятичных цифр, разделенных пробелами.Вывести четные числа этой строки.

void task2() {
	setlocale(LC_CTYPE, "rus");
	const int length = 100;
	char str[length];
	int nowLength = 0, index = 0;
	cout << "Введите строку чисел ";
	cin.getline(str, length);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i + 1] == ' ' || str[i + 1] == '\0' || i == length - 1) {
			if (str[i] % 2 == 0) {
				for (int j = index; j <= i; j++) {
					cout << str[j];
				}
				cout << " ";
			}
			index = i + 2;
		}
		
	}
}