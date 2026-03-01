#include <iostream>
#include <cstdlib>

// Создайте программу, которая принимает массив чисел и использует статические переменные для подсчёта суммы и среднего значения.
// Используйте указатели для работы с массивом.

static int sumArgc = 0;

void sum(char* arg) {
    sumArgc += atoi(arg);
}

int main(int argc, char* argv[]) {
    setlocale(LC_CTYPE, "rus");
    std::cout << "Количество аргументов: " << argc - 1 << std::endl;

    for (int i = 1; i < argc; i++) {
        sum(*(argv + i));
    }
    
    std::cout << "Текущая сумма: " << sumArgc << std::endl;
    static int averageArgc = sumArgc / (argc - 1);
    std::cout << "Среднее значение аргументов: " << averageArgc << std::endl;

    return 0;
}