#include <iostream>
#include <random>
using namespace std;


// 1. Дана матрица А(n, n) и целое число m. 
// Преобразовать матрицу по правилу: 
// строку с номером m сделать столбцом с номером m, 
// а столбец с номером m сделать строкой с номером m. 


void task1() {
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
    cout << "Введите число m "; cin >> m;

    for (int i = 0; i < n; i++) {
        buff = *(*(arr + i) + (m - 1)); // помещаем элемент столбца в буфер 
        *(*(arr + i) + (m - 1)) = *(*(arr + (m - 1)) + i); // помещаем в столбец элемент строки
        *(*(arr + (m - 1)) + i) = buff; // помещаем элемент столбца в строку
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
}