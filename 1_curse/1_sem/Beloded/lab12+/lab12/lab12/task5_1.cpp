#include <iostream>



void task5_1() {
	setlocale(LC_CTYPE, "rus");
	int x[] = { 2, 2, 3, 4, 5 };
	int y[] = { 2, 4, 8, 5, 3, 2 };
	int size1 = sizeof(x) / sizeof(x[0]);
	int size2 = sizeof(y) / sizeof(y[0]);
	int k = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (*(x + i) == *(y + j)) {
				k++;
			}
		}
	}
	std::cout << "Количество пар = " << k;
}