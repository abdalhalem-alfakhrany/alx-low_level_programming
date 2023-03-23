#include "main.h"

/**
 * more_numbers - print numerb from 0 ro 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int firstDigit = j / 10;
			int lastDigit = j % 10;

			if (firstDigit > 0)
				_putchar(firstDigit + '0');
			_putchar(lastDigit + '0');
		}
		_putchar('\n');
	}
}
