#include <iostream>
#include <random>
#include "tasks.h"
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "rus");
    srand(time(NULL));
    int k;
    cout << "Выберите задание для выполнения (1 - Задание №1, 2 - Задание №2) "; cin >> k;
    switch (k) {
    case 1: { 
        int length = 10;
        int *arr = new int[length];
        for (int i = 0; i < length; i++) {
            arr[i] = -20 + rand() % 40;
            cout << arr[i] << " ";
        }
        
        task1(arr, length); 
        delete[] arr;
        break;
    }
    case 2: {
        char *str = new char[30];
        cin.ignore();
        task2(str);
        break;
    }
    default: {
        cout << "Неправильный вариант ответа ";
        break;
    }
    }
}

