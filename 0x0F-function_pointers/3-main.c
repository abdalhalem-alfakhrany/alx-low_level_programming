#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


/**
 * main - check the code
 * @argc: arguments count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a, b;
	char *op;

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (strchr("+-*/%", op[0]) == 0)
	{
		printf("Error\n");
		return (99);
	}

	if (strchr("/%", op[0]) && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
