#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Succses
 */
int main(int argc, char **argv)
{
	int i, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *number = argv[i];
		int n;

		if (isalpha(number[0]))
		{
			printf("Error\n");
			return (1);
		}
		n = atoi(number);

		if (n < 0)
			continue;

		result += atoi(number);
	}
	
	printf("%d\n", result);
	return (0);
}
