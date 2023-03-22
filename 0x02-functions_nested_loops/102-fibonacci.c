#include "stdio.h"

/**
 * main - Entry point
 * Return: 0 (Succesea)
 */
int main(void)
{	
	unsigned long n1 = 0, n2 = 1, i, fibonacci, tmp;

	for (i = 0; i < 50; i++)
	{
		fibonacci = n1 + n2;
		tmp = n2;
		n2 = fibonacci;
		n1 = tmp;
		if(i == 0)
		{
			printf("%ld",fibonacci);
			continue;
		}

		printf(", %ld", fibonacci);
	}
	printf("\n");
	return (0);
}
