#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if Succses 1 if failler
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoll(argv[1]);
	b = atoll(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
