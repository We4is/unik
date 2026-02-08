#include <iostream>
using namespace std;



void task5_1() {
	float g, i, n, y, t, b = 2, j = 6, a = 1.5e8;
	cout << "Enter n = "; cin >> n;
	for (g = 1; g <= n; g++) {
		cout << "Enter i = "; cin >> i;
		y = a / (b + exp(b)) / (1 + j * i);
		t = cos(y + 1) / sqrt(abs(-2 * j));
		cout << "y = " << y << endl << "t = " << t << endl;
	}
}