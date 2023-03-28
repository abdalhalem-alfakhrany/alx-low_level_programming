#include "main.h"

/**
 * print_rev - print the string in reverse order
 * @str: the string to be reversied
 * Return: void
 */
void print_rev(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
		;
	for (i = length - 1; i >= 0; --i)
		_putchar(str[i]);
	_putchar('\n');
}
