#include <iostream>
#include <windows.h>
#include <random>
#include <iomanip>
#include "tasks.h"
using namespace std;



int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "rus");
	srand(time(NULL));
	int k;
	cout << "Выберите задание для выполнения (1 - Задание №1, 2 - Задание №2) "; cin >> k;
	cin.ignore();
	switch (k) {
	case 1: {
		int length;

		cout << "Введите длину массива "; cin >> length;

		int* arr = new int[length];

		for (int i = 0; i < length; i++) {
			arr[i] = 1 + rand() % 20;
			cout << arr[i] << " ";
		}

		cout << endl;

		int diff = *task1(arr, length);

		cout << diff;
		delete[] arr;

		break;
	}
	case 2: {
		int length;

		cout << "Введите длину массива "; cin >> length;

		int** arr = new int* [length];

		for (int i = 0; i < length; i++) {
			arr[i] = new int[length];
		}
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < length; j++) {
				arr[i][j] = -1 + rand() % 20;
				cout << setw(4) << arr[i][j] << " ";
			}
			cout << endl;
		}

		task2(arr, length);

		cout << endl << "Новый массив" << endl << endl;

		for (int i = 0; i < length; i++) {
			for (int j = 0; j < length; j++) {
				cout << setw(4) << arr[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < length; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		break;
	}
	default: {
		cout << "Неправильный вариант ответа ";
		break;
	}
	}
}
