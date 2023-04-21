#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"
#include "string.h"

/**
 * print_all - print all lits itmes sperated be sperator
 * @format: the argument type indicator
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;

	va_start(list, format);

	while (format[i])
	{
		if (i > 0)
			printf(", ");

		switch (format[i])
		{
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 'i':
				printf("%d", va_arg(list, unsigned int));
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 's':
				printf("%s", va_arg(list, char *));
				break;
			default:
				break;
		}
		i++;
	}
	putchar('\n');
	va_end(list);
}
