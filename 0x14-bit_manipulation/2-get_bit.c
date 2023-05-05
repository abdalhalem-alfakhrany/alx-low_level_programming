#include "main.h"

/**
 * get_bit - get the bit of binary representaion at the index
 * @n: the number to get bit from
 * @index: the index of bit
 * Return: -1 if failer , the value of the bit if Success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	
	if (n == 0)
		return (0);

	for (i = 0; i < index; i++)
	{
		if (n == 0)
			return (-1);
		n /= 2;
	}
	return (n % 2);
}
