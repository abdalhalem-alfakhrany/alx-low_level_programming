#include "variadic_functions.h"
#include <stdarg.h>
#include "stdio.h"

/**
 * print_strings - print all lits itmes sperated be sperator
 * @separator: the sperator
 * @n: list length
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
			printf("%s", separator);

		printf("%s", va_arg(list, char *));
	}

	putchar('\n');

	va_end(list);
}
