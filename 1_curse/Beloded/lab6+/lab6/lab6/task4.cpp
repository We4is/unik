#include <stdio.h>



void task4()
{
	int n, i, j;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%5d", i * j);
		printf("\n");
	}
}