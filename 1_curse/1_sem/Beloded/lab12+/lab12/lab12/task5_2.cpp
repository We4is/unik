#include <iostream>



void task5_2() {
	setlocale(LC_CTYPE, "rus");
	int K[] = {2, 3, 6, 1, 101, 4, 8, 3, 9, 2, 100};
	int t, buff, size = sizeof(K) / sizeof(K[0]);
	std::cout << "¬ведите число t = "; std::cin >> t;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (*(K + j) > t) {
				buff = *(K + j + 1);
				*(K + j + 1) = *(K + j);
				*(K + j) = buff;
			}
			else if (*(K + j) == t && *(K + j) > *(K + j + 1)) {
				buff = *(K + j + 1);
				*(K + j + 1) = *(K + j);
				*(K + j) = buff;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		std::cout << *(K + i) << " ";
	}

}