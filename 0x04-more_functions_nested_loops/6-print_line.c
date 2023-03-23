#include "main.h"

/**
 * print_line - print _ to terminal n times
 * @n: how much _ to print
 * Return: void
 */
void print_line(int n)
{
	for (; n >= 1; n--)
		_putchar('_');
	_putchar('\n');
}
