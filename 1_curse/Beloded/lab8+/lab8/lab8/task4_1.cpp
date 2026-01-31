#include <iostream>




void task4_1(){
	setlocale(LC_CTYPE, "Russian");
	int y, sum = 0;
	float c = 10.1, z;

	for (int i = 0; i < 6; i++) {
		std::cout << "Введите y" << i + 1 << " = "; std::cin >> y;
		sum += y;
	}
	if (sum > c) std::cout << "Значение z = " << (z = sin(c) * sin(c)) << std::endl;
	else std::cout << "Значение z = " << (z = cos(c) * cos(c)) << std::endl;
}