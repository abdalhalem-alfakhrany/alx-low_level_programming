#include "main.h"

/**
 * clear_bit - set the bit index to 0
 * @n: pointer to number
 * @index: the bit index
 * Return: -1 if failer , 1 if Success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1 << index);
	*n = (*n & mask);
	return (1);
}
