#include "main.h"

/**
 * _print_rev_recursion - print string recursevly reversed
 * @s: string to be printed reversly
 * Retrun: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(++s);

	_putchar(*s);
}
