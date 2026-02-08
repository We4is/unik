#include <iostream>
using namespace std;



void task6() {
	setlocale(LC_CTYPE, "Russian");
	float v = 0, x, s = 5.2, j = 10.4e4;

	for (int i = 0; i < 4; i++) {
		cout << "¬ведите число x = "; cin >> x;
		if (2 * s > x * j) {
			v = cos(j * x) * cos(j * x);
		}
		else if (2 * s < x * j) {
			v = tan(j * x);
		}
		else if (2 * s == x * j) {
			v = 5 - exp(x / 2);
		}
		cout << "v = " << v << endl;
	}
}