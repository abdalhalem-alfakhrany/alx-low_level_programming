#include "main.h"

/**
 * get_endianness - detect system is littile or bi endianness
 * Return: 0 if big 1 if little
 */
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (0);
	return (1);
}
