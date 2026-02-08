#include <iostream>
using namespace std;



void task6() {
	setlocale(LC_CTYPE, "Russian");

	int k;

	puts("Привет, можно ли взять у тебя готовый вариант пятой лабораторной? (1-да, 2-нет)");
	cin >> k;

	switch (k)
	{
	case 1:
	{
		puts("Тогда куда тебе удобнее скинуть? (1 - телеграмм, 2 - вайбер, 3 - одноклассники");
		cin >> k;
		switch (k)
		{
		case 1:
		{
			puts("Хорошо, спасибо");
			break;
		}
		case 2:
		{
			puts("Хорошо, спасибо, было бы конечно лучше в телеграмм, но и так сойдёт");
			break;
		}
		case 3:
		{
			puts("Хорошо, спасибо. (Лучше не просил)");
			break;
		}
		default:
		{
			puts("Неккоректный ввод");
			break;
		}
		}
		break;
	}
	case 2:
	{
		puts("Хорошо, тогда попрошу кого-нибудь другого");
		break;
	}
	default:
	{
		puts("Неккоректный ввод");
	}
	break;
	}
}