#include "main.h"

/**
 * get_bit - get the bit of binary representaion at the index
 * @n: the number to get bit from
 * @index: the index of bit
 * Return: -1 if failer , the value of the bit if Success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	
	return ((n & (1 << index)) >> index);
}
