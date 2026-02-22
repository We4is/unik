#include <iostream>
#include <time.h>
using namespace std;


long long recursion(int N) {
	if (N == 1) return 0;     
	if (N == 2) return 1;     
	return recursion(N - 1) + recursion(N - 2);
}




int main() {
	setlocale(LC_CTYPE, "rus");

	time_t start_time, end_time;
	double elapsed_time;
	start_time = time(NULL);

	int N;
	
	cout << "Введите n: "; cin >> N;
	cout << recursion(N);

	end_time = time(NULL);
	elapsed_time = difftime(end_time, start_time);

	printf("Время выполнения: %.2f секунд\n", elapsed_time);
	return 0;
}