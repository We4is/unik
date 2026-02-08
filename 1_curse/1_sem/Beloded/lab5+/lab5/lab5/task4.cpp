#include <iostream>
using namespace std;



void task4() {
	setlocale(LC_CTYPE, "Russian");

	float a, b, c, x1, x2, d;

	cout << "Введите коэффициенты квадратного уравнения вида ax^2+bx+c = "; cin >> a >> b >> c;

	d = b * b - 4 * a * c;

	if (d > 0) {
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << "Уравнение имеет два действительных корня x1, x2: " << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
	else if (d == 0) {
		x1 = x2 = -b / (2 * a);
		cout << "Уравнение имеет единственное решение x = " << x1 << endl;
	}
	else {
		cout << "Уравнение не имеет действительных корней" << endl;
	}

}