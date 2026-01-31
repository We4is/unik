#include <iostream>
using namespace std;



void task5() {
	setlocale(LC_CTYPE, "Russian");


	float a, b, c, d;

	cout << "Введите переменные a, b, c ";
	cin >> a >> b >> c;
	d = a;
	if (d <= b) d = b;
	if (d <= c) d = c;
	cout << "Наибольшее введенное число " << d << endl;
}