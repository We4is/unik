#include <iostream>




void task4_2() {
	setlocale(LC_CTYPE, "Russian");
	float y = 0.0, x, m, max = -9999;
	std::cout << "Найдём максимальное число x = max" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Введите x" << i + 1 << " = "; std::cin >> x;
		if (x > max) max = x;
	}
	std::cout << "Максимальное число x = " << max << std::endl;
	m = 1 + max;
	std::cout << "m = " << m << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Введите x" << i + 1 << " = "; std::cin >> x;
		y += x * x + m;
	}
	std::cout << y;
}