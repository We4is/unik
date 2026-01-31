#include <iostream>
using namespace std;


int task5_2() {
	setlocale(LC_CTYPE, "Russian");
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 6, 6, 6, 9, 9, 9, 9, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int maxRep = 0, index;
	

	for (int i = 0; i < size; i++) {
		int rep = 1;
			for (int j = i + 1; j < size; j++) {
				if (arr[i] == arr[j]) {
					rep += 1;
				}
			}
			if (rep >= maxRep) {
				maxRep = rep;
				index = i;
			}
	}
	cout << "ћаксимальное число повторений = " << maxRep << endl << "Ёто число " << arr[index];
	return 0;
}

