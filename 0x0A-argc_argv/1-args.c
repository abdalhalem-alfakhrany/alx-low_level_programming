#include "stdio.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Succses
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}