#include "main.h"
#include "stdio.h"

/**
 * print_array - printing the array elemnts
 * @a: the array to be printed
 * @n: array size
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
			continue;
		}
		printf(", %d", a[i]);
	}
	printf("\n");
}
