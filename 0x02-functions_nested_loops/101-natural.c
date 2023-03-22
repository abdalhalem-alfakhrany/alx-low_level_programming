#include "stdio.h"

/**
* main - print the sum of 3 and 5 multiples
* Return: Always 0
*/
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i += 3)
		sum += i;

	for (i = 0; i < 1024; i += 5)
	{
		if ((i % 3) == 0)
			continue;
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
