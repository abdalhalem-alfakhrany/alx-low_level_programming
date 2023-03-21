#include "main.h"

/**
  * print_alphabet - print all alphabet leeters to stdout
  * Return: void not returning anything
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
