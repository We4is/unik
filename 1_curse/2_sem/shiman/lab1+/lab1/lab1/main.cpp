#include <iostream>
#include <time.h>
using namespace std;

unsigned long long recursion(int N) {
	if (N == 0) return 0;
	if (N == 1) return 1;
	return recursion(N - 1) + recursion(N - 2);
}

unsigned long long iter(int N) {
	unsigned long long nextNum = 0, f0 = 0, f1 = 1;
	if (N == 0) {
		nextNum = 0;
	}
	else if (N == 1) {
		nextNum = 1;
	}
	else {
		for (int i = 2; i <= N; i++) {
			nextNum = f0 + f1;
			f0 = f1;
			f1 = nextNum;
		}
	}
	return nextNum;
}

int main() {
	setlocale(LC_CTYPE, "rus");
	time_t start, end;
	int time;

	int N;
	
	cout << "Введите число N: "; cin >> N;

	if (N < 0)
	{
		cout << "N должно быть больше нуля";
		return 0;
	}

	start = clock();

	unsigned long long iterResult = iter(N);

	end = clock();
	time = (end - start) / CLOCKS_PER_SEC;

	cout << "Число N фибоначчи через цикл: " << iterResult << "\n";
	cout << "Затраченно времени: " << time / 60 << " мин " << time % 60 << " сек\n";

	start = clock();

	unsigned long long recResult = recursion(N);

	end = clock();
	time = (end - start) / CLOCKS_PER_SEC;

	cout << "\nЧисло N фибоначчи через рекурсию: " << recResult << "\n";
	cout << "Затраченно времени: " << time / 60 << " мин " << time % 60 << " сек\n";

	return 0;
}