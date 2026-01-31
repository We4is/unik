#include <iostream>
using namespace std;



// 2. Если в матрице имеется столбец, все элементы которого положительны, 
// то знаки элементов предыдущего столбца изменить на противоположные.



int& task2(int** arr, int& length) {
	int index = -1, k = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (arr[j][i] < 0) { k = 0; break; };
			k++;
		}
		if (k == length) {
			index = i;
			break;
		}
	}
	
	cout << endl << "Столбец с положительными элементами: " << index;

	for (int i = 0; i < length; i++) {
		if (index == 0) {
			arr[i][index] *= -1;
		}
		else {
			arr[i][index - 1] *= -1;
		}
	}
	
	return **arr;
}