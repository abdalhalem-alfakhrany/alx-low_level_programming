#include "main.h"

/**
 * flip_bits - get the amount of bits need to be flipped to get n from m
 * @n: first number
 * @m: second number
 * Return: the amount of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipps, count = 0;

	flipps = n ^ m;

	while (flipps > 0)
	{
		if (flipps & 1)
			count++;
		flipps >>= 1;
	}

	return (count);
}
