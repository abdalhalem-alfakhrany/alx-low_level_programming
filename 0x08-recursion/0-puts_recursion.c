#include "main.h"

/**
 * _puts_recursion - print string recursevly
 * @s: string to be printed
 * Retrun: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);

	_puts_recursion(++s);
}
