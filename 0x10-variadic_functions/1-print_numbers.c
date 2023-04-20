#include "variadic_functions.h"
#include <stdarg.h>
#include "stdio.h"

/**
 * print_numbers - print all lits itmes sperated be sperator
 * @separator: the sperator
 * @n: list length
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf("%s", separator);
		printf("%d", va_arg(list, int));
	}
	putchar('\n');
	va_end(list);
}
