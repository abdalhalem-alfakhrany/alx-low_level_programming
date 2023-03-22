#include "main.h"
#include "stdio.h"

/**
 * print_times_table - print times table of number n
 * @n: the number of times table
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				printf("%d", j * i);
				continue;
			}
			printf(", %3d", j * i);
		}
		printf("\n");
	}
}
