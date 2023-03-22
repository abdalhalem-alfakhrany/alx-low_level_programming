#include <stdio.h>

/**
* main - check the code
* Return: Always 0
*/
int main(void)
{
	unsigned long n1 = 0, n2 = 1, i, fibonacci, tmp, sum;

	for (i = 0; i < 50; i++)
	{
		fibonacci = n1 + n2;
		tmp = n2;
		n2 = fibonacci;
		n1 = tmp;
		if (fibonacci % 2)
			sum += fibonacci;
	}
	printf("%ld\n", sum);
	return (0);
}
