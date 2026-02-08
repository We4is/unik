#include <iostream>

// 1. В одномерном массиве найти минимальный и максимальный элементы.Вычислить их разность.

int* task1(int* arr, int& length) {
	int min = arr[0], max = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	int* diff = new int;
	*diff = max - min;
	return diff;
}