#include <iostream>
using namespace std;

void task5_1()
{
    setlocale(LC_CTYPE, "Russian");
    int A, n = 0;
    char tmp[33];
    const unsigned int mask = 1 << 31;
    cout << "Введите число A:";
    cin >> A;
    for (int i = 5; i < 11; i++)
    {
        _itoa_s(A, tmp, 2);
        if ((A & (1 << i)) != 0)
        {
            n += 1;
        }

    }
    cout << "Количество единиц с 5 по 10 бит:" << n;
}