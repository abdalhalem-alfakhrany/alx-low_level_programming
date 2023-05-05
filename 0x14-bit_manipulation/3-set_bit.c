#include "main.h"

/**
 * set_bit - change the bit at index to 1
 * @n: pointer to number
 * @index: the bit index
 * Return: -1 if failer , 1 if Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
