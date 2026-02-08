#include <iostream>
#include <windows.h>

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	char your_name[60];
	puts("Как вас зовут? ");
	gets_s(name);
	printf("Привет, %s\n", name);
	printf("Приятно познакомиться, а меня зовут: ");
	gets_s(your_name);
	printf("Приятно познакомиться %s\n", your_name);
}