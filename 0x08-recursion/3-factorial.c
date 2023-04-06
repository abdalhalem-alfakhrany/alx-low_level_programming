#include "main.h"

/**
 * factorial - calculate the factorial of the number
 * @n: number to calculate its factorial
 * Return: number n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	if (n == 2)
		return (2);

	return (factorial(n - 1) * n);
}
