#include "main.h"

/**
  * print_alphabet_x10 - print all alphabet 10 times to stdout
  * Retrun: void
  */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
