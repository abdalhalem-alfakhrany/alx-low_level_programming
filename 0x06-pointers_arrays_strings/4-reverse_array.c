#include "main.h"

/**
 * reverse_array - revers the array order
 * @a: the array to be reversed
 * @n: array length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
