#include <iostream>
using namespace std;

void task2(char *str) {
    cout << "Введите строку для проверки на наличие упоминания БГТУ: ";
    cin.getline(str, 30);
    if (strstr(str, "БГТУ")) { 
        cout << "Строка содержит упоминание БГТУ" << endl;
    }
    else {
        cout << "Строка НЕ содержит упоминания БГТУ" << endl;
    }
}