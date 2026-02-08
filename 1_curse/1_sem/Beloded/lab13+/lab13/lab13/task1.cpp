#include <iostream>
using namespace std;



void task1() {
	setlocale(LC_ALL, "rus");
	const int length = 100;
	int maxLength = 0, minLength = 100, nowLength = 0, startPos = 0, completePos = 0;
	char str[length];


	cout << "¬ведите желаемую строку: ";
	cin.getline(str, length);


	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ' || str[i] == '\t') {
			if (nowLength > maxLength) {
				maxLength = nowLength;
				completePos = startPos;
			}
			nowLength = 0;
		}
		else {
			if (nowLength == 0) {
				startPos = i;
			}
			nowLength++;
		}

	}

	if (nowLength > maxLength) {
		maxLength = nowLength;
		completePos = startPos;
	}

	for (int i = completePos; str[i] != ' ' && str[i] != '\0'; i++) {
		cout << str[i];
	}
	cout << endl;


	nowLength = 0, startPos = 0, completePos = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ' || str[i] == '\t') {
			if (nowLength > 0 && nowLength < minLength) {
				minLength = nowLength;
				completePos = startPos;
			}
			nowLength = 0;
		}
		else {
			if (nowLength == 0) {
				startPos = i;
			}
			nowLength++;
		}

	}

	if (nowLength < minLength) {
		minLength = nowLength;
		completePos = startPos;
	}
	for (int i = completePos; str[i] != ' ' && str[i] != '\0'; i++) {
		cout << str[i];
	}
}