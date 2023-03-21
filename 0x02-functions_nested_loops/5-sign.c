#include "main.h"

/**
 * print_sign - descripte the number positive or nigative
 * @n: the number to be checked
 * Return: 0 if number is 0, 1 if number is positive, -1 if number is nigative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
