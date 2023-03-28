#include "main.h"
#include "string.h"

/**
 * puts_half - print the half of string
 * @str: the string to be printed
 * Return: void
*/
void puts_half(char *str)
{
	int length = strlen(str), i;

	/* for (i = (length % 2 == 0) ? length / 2 : (length - 1) / 2; i < length; i++) */
	for (i = length / 2; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
