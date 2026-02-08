#include <iostream>
using namespace std;



void task5_2() {
	setlocale(LC_CTYPE, "Russian");
	float  i = 3, y, t, b = 2, j = 6, a = 1.5e8;
	while (i > 2) {
		y = a / (b + exp(b)) / (1 + j * i);
		t = cos(y + 1) / sqrt(abs(-2 * j));
		cout << "Значение i = " << i << endl;
		cout << "y = " << y << endl << "t = " << t << endl;
		i -= 0.1;
	}
}