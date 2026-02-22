#include <iostream>
#include <stdio.h>
#include <Windows.h>




int main() {
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* f;
	char str[50];

	fopen_s(&f, "a.txt", "r");

	if (f == NULL) return -1;

	fgets(str, 50, f);

	printf("Целая строка из файла: %s", str);

	int number = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			number = atoi(&str[i]);
			break;
		}
	}

	printf("\nЧисло: %d", number);  

	fseek(f, 0, 0);

	printf("\nПервый символ строки в коде ASCII: %d ", fgetc(f));

	fseek(f, 0, 0);

	int n = 5;

	printf("\nВывести %d символов: ", n);
	
	for (int i = 0; i < n; i++) {
		int c = fgetc(f);
		if (c == EOF) break;
		putchar(c);
	}

	

	printf("\nВывести 5 символов с %d позиции: ", n);

	fseek(f, n, 0);

	for (int i = 0; i < n; i++) {
		int c = fgetc(f);
		if (c == EOF) break;
		putchar(c);
	}

	fseek(f, 0, 0);


	char buff[50] = { 0 };  
	size_t bytesRead = fread(buff, sizeof(char), 20, f);  

	printf("\nПрочитано %zu байт\n", bytesRead);
	printf("Содержимое буфера: %s\n", buff);

	fclose(f);
}