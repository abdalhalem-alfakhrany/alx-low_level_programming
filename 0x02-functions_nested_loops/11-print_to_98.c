#include "main.h"
#include "stdio.h"
/**
* print_to_98 - print all numbers to 98
* @n: the number to start from
* Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			if (i == n)
			{
				printf("%d", i);
				continue;
			}
			printf(", %2d", i);
		}
	else
		for (i = n; i >= 98; i--)
		{
			if (i == n)
			{
				printf("%d", i);
				continue;
			}
			printf(", %2d", i);
		}
	printf("\n");
}
