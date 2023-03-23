#include "stdio.h"

/**
 * main - Enty point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	printf("1");
	for(i = 2; i <= 100; i++)
	{
		int fobob = 0;

		if ((i % 3) == 0)
			fobob += 1;

		if ((i % 5) == 0)
			fobob += fobob + 2;

		switch (fobob)
		{
		case 0 :
			printf(" %d", i);
			break;
		case 1 :
			printf(" Fizz");
			break;
		case 2 :
			printf(" Buzz");
			break;
		case 3 :
			printf(" FizzBuzz");
			break;
		default:
			printf(" FizzBuzz");
			break;
		}

	}
	printf("\n");
	return (0);
}
