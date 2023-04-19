#include "function_pointers.h"

/**
 * print_name - print name in terminal by calling function f
 * @name: the name to be printed
 * @f: the function pointer to proint function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
		f(name);
}
