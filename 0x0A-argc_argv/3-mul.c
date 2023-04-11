#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Succses
 */
int main(int argc, char **argv)
{
	long a, b;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

	a = atoll(argv[1]);
	b = atoll(argv[2]);
	
	printf("%ld\n", a * b);
	return (0);
}
