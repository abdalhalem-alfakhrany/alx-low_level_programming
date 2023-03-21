#include "main.h"
#include "stdlib.h"
/**
* print_last_digit - printing the last digit of numerb to stdout
* @n: the number to print tha last digit of
* Return: the last digit of number n
 */
int print_last_digit(int n)
{
 	int lastDigit = n % 10;
	
	lastDigit = abs(lastDigit);
	_putchar(lastDigit + '0');
	return (lastDigit);
}
