#include <windows.h>
#include <iostream>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    using namespace std;
    unsigned int code;
    cout << "Введите код ";
    cin >> code;

    if (code >= '0' && code <= '9')
    {
        printf("Это цифра %c, код ASCII = %X", code, code);
        cout << endl;
    }
    else if (code >= 'A' && code <= 'Z' || code >= 'a' && code <= 'z')
    {
        printf("Это латинская буква %c, код ASCII = %X", code, code);
        cout << endl;
    }
    else if (code >= 0xC0 && code <= 0xFF)
    {
        printf("Это русская буква %c, код Windows-1251 = %X", code, code);
        cout << endl;
    }
    else
    {
        printf("Это не цифра и не буква <%c>, код = %X", code, code);
        cout << endl;
    }
    system("pause");
    return 0;
}