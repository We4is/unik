#include <iostream>
#include <random>
using namespace std;

// 2. Найти в матрице первую строку, все элементы которой равны нулю. Все элементы столбца с таким же номером уменьшить вдвое.

void task2() {
    setlocale(LC_CTYPE, "rus");
    srand(time(NULL));
    const int n = 3;
    int m, buff;
    int arr[n][n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(*(arr + i) + j) = rand() % 20;
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }


    cout << "Введите нулевую строку "; cin >> m;
    for (int i = 0; i < n; i++) {
        *(*(arr + (m - 1)) + i) = 0;
    }

    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (*(*(arr + i) + j) == 0){ // проверяет строку на нули
                k += 1;
            }
        }
        if (k == n) {
            for (int k = 0; k < n; k++) {
                *(*(arr + k) + i) /= 2;
            }
            break;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }

}