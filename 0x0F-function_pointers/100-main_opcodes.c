#include "stdio.h"


/**
 * main - check the code
 * @argc: arguments count
 * @argv: argument vector
 * Return: 1 if arguments count not correct ,
 * 2 if argument count less than 0 ,0 if Success
 */
int main(int argc, char **argv)
{
	int i, bytes_count;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1] < 0)
	{
		printf("Error\n");
		return (1);
	}

	bytes_count = atoi(argv[1]);

	for (i = 0; i < bytes_count; i++)
	{
		int op = *(unsigned char *)(address + i);

		printf("%.2x\n", op);
	}

	return (0);
}
