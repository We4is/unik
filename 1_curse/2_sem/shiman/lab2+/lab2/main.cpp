#include <iostream>
#include <cmath>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "rus");
	long long N, X, a, b;
	bool guessed = false;
	short k, count = 0;

	cout << "Введите число N: "; cin >> N;

	a = 1;
	b = N;
	X = (a + b) / 2;

	cout << "X: " << X << endl;
	
	while (!guessed) {

		cout << "\n«мало», «много», «угадал» (1 - 3) "; 
		cin >> k; 

		switch (k) {
		case 1: {
			a = X + 1;
			X = (a + b) / 2;
			cout << X; 
			count++;
			break;
		}
		case 2: {
			b = X - 1;
			X = (a + b) / 2;
			cout << X;
			count++;
			break;
		}
		case 3: {
			count++;
			cout << "Максимальное число шагов для поиска числа из N = " << N << " чисел = " << (int)log2(N) + 1 << endl;
			
			cout << N << endl;
			while (N > 1) {
				N = (N + 1) / 2; 
				cout << N << endl;
			}
			guessed = true;
			break;
		}
		default: {
			cout << "Ошибка! Введите 1, 2 или 3\n";
			break;
		}
		}
	}
	cout << "Загаданное число X = " << X << " Найдено за " << count << " шагов";


	return 0;
}