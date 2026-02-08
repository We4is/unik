#include <iostream>
using namespace std;

void task1(int *arr, int length) {
	int min = abs(arr[0]), index = 0, indexMin = 0, sum = 0;
	for (int i = 0; i < length; i++) {
		if (abs(arr[i]) <= min) {
			min = abs(arr[i]);
			index = i;
		}
	}
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			indexMin = i;
			break;
		}
	}
	for (int i = indexMin + 1; i < length; i++) {
		sum += abs(arr[i]);
	}

	cout << endl << "Минимальное число по модулю min = " << min << endl << "Его номер index = " << index << endl;
	cout << "Сумма модулей элементов после первого отрицательного числа массива sum = " << sum;
}