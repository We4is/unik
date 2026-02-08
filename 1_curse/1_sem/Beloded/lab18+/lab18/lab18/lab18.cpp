#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int choice;
    string number;
    int base;
    int decimal = 0;

    cout << "Выберите систему счисления:\n";
    cout << "10 - Десятичная\n";
    cout << "2 - Двоичная\n";
    cout << "8 - Восьмеричная\n";
    cout << "16 - Шестнадцатеричная\n";
    cin >> choice;

    cout << "Введите число: ";
    cin >> number;

    switch (choice)
    {
    case 10:
        base = 10; break;
    case 2:
        base = 2; break;
    case 8:
        base = 8; break;
    case 16:
        base = 16; break;
    default:
        base = 10; break;
    }

    for (int i = 0; i < number.length(); i++)
    {
        char c = number[i];
        int value;

        if (c >= '0' && c <= '9')
            value = c - '0';
        else if (c >= 'A' && c <= 'F')
            value = c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            value = c - 'a' + 10;
        else
            value = 0;

        decimal = decimal * base + value;
    }

    cout << "\nРезультаты:\n";
    cout << "Десятичная: " << decimal << endl;

    int bits[32], i, t;

    cout << "2-ая: ";
    i = 0;
    t = decimal;

    if (t == 0) 
    {
        cout << "0";
    }
    else 
    {
        do 
        {
            bits[i++] = t % 2;
            t /= 2;
        } while (t > 0);

        for (int j = i - 1; j >= 0; j--) {
            cout << bits[j];
        }
    }
    cout << endl;

    cout << "8-ая: ";
    i = 0;
    t = decimal;

    if (t == 0) 
    {
        cout << "0";
    }
    else 
    {
        do {
            bits[i++] = t % 8;
            t /= 8;
        } while (t > 0);

        for (int j = i - 1; j >= 0; j--) {
            cout << bits[j];
        }
    }
    cout << endl;

    cout << "16-ая: ";
    i = 0;
    t = decimal;
    char hex[32];

    if (t == 0) 
    {
        cout << "0";
    }
    else 
    {
        do {
            int r = t % 16;
            hex[i++] = (r < 10) ? (r + '0') : (r - 10 + 'A');
            t /= 16;
        } while (t > 0);

        for (int j = i - 1; j >= 0; j--) {
            cout << hex[j];
        }
    }
    cout << endl;

    return 0;
}