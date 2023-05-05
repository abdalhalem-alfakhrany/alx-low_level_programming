#include "main.h"

/**
 * print_binary - print number in binary format
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (n != 0)
	{
		putchar('0' + (n % 2));
		n /= 2;
	}
}
