#include <iostream>
using namespace std;



void task5_3() {
	setlocale(LC_CTYPE, "Russian");
	float g, i, n, y, b, t, j = 6, a = 1.5e8;
	cout << "Enter n = "; cin >> n;
	for (g = 1; g <= n; g++) {
		b = 2.4f;
		cout << "Enter i = "; cin >> i;
		while (b < 3.2f) {
			y = a / (b + exp(b)) / (1 + j * i);
			t = cos(y + 1) / sqrt(abs(-2 * j));
			cout << "Значение b = " << b << " " << "Значение i = " << i << endl;
			cout << "y = " << y << endl << "t = " << t << endl;
			b += 0.2;
		}

	}
}