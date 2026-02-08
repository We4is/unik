#include <iostream>
#include <windows.h>
#include <iomanip> 
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	char t, probel;
	probel = ' ';

	cout << "Введите желаемый символ "; cin >> t;

	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(t) << t << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(7) << setfill(t) << t << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(9) << setfill(t) << t << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(11) << setfill(t) << t << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(9) << setfill(t) << t << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(7) << setfill(t) << t << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(t) << t << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;

	int A, B, C, sum;

	printf("Введите количество сбитых самолётов, ракет, спутников: ");
	scanf_s("%d%d%d", &A, &B, &C);

	sum = A * 50 + B * 100 + C * 200;

	printf("Полученное число очков: %d", sum);

	return 0;
}


