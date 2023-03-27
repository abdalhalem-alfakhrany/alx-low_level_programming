#include "main.h"

/**
 * swap_int - swap int a, b values
 * @a: refrance to a variable
 * @b: refrance to b variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
