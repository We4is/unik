#include <iostream>
#include <random>
using namespace std;

// 1. ¬ массиве, состо€щем из вещественных элементов, 
// вычислить количество элементов массива, 
// больших некоторого заданного числа —, и 
// произведение элементов массива, 
// расположенных после максимального по модулю элемента.

void task1()
{
    setlocale(LC_CTYPE, "rus");
    srand(time(NULL));
    const int length = 20;
    int* arr = new int[length];
    int C, index, k = 0, max, prod = 1;
    cout << "¬ведите число C = "; cin >> C;

    for (int i = 0; i < length; i++) {
        arr[i] = 1 + rand() % 10;
        cout << arr[i] << " ";
        if (arr[i] > C) {
            k++;
        }
    }
    max = abs(arr[0]);
    for (int i = 0; i < length; i++) {
        if (abs(arr[i]) >= max) {
            max = arr[i];
            index = i;
        }
    }
    for (int i = index + 1; i < length; i++) {
        prod *= arr[i];
    }
    cout << endl;
    cout << "ѕроизведение чисел после наибольшего по модулю = " << prod << endl;
    cout << k;

    delete[] arr;


}

