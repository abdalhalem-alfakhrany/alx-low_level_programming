#include "main.h"
#include "string.h"

/**
 * puts2 - print even indeces form string
 * @str: the string to be printed
 * Return: void
*/
void puts2(char *str)
{
	int i, length = strlen(str);

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
