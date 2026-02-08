#include <iostream>
#include <random>
using namespace std;

// 2. Проверить, есть ли в матрице хотя бы одна строка, 
// содержащая элемент, равный нулю, и найти ее номер. 
// Уменьшить все элементы матрицы на значение первого элемента найденной строки.

void task2() {
	setlocale(LC_CTYPE, "rus");
	srand(time(NULL));
	const int length = 3;


	int k = 0, index = 0;
	int** arr = new int*[length];
	for (int i = 0; i < length; i++) {
		arr[i] = new int[length];
	}



	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	bool found = false; 
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (arr[i][j] == 0) {
				k = arr[i][0];
				index = i + 1;
				found = true;
				break;
			}
		}
		if (found) break;
	}

	if (index == 0) {
		cout << "Строки с нулевым элементом нет";
		for (int i = 0; i < length; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		return;
	}

	cout << endl;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			arr[i][j] -= k;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	

	cout << "Номер строки с нулевым элементом " << index;
	for (int i = 0; i < length; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}