#include <stdio.h>
#include <conio.h> 



void task2_1()
{
    char ch;
    float sv, x, sum = 0;
    float count = 0;
    do
    {
        printf("Enter x:");
        scanf_s("%f", &x);
        sum += x;
        count++;
        sv = sum / count;
        printf("sv=%1.3f\n", sv);
        printf("if continue input 'y' else 'n' ");
        ch = _getch();
    } while (ch != 'n');
}