#include <iostream>
using namespace std;



void task1() {
    setlocale(LC_ALL, "Russian");

    const int size = 4;
    float a, sum = 0;

    for (int i = 0; i < size; ++i) {
        cout << "Введите a" << i << ": ";
        cin >> a;
        sum += a;
    }

    cout << "Ответ: " << sum << endl;
}
