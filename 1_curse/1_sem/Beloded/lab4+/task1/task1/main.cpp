#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_CTYPE, "Russian");
	int t;
	long b;
	cout << "Введите t=";
	cin >> t;
	cout << "Введите b=";
	cin >> b;
	cout << "t=" << t << endl;
	cout << "Тип Размер в байтах" << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "b=" << b << endl;
	cout << "Тип Размер в байтах" << endl;
	cout << "long: " << sizeof(long) << endl;
	// sizeof определяет размер объекта в байтах
}