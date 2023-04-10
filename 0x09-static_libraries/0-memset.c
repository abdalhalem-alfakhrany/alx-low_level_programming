#include "main.h"

/**
 * _memset - set the n memory with b char
 * @s: memory pointer
 * @b: value to be filed with
 * @n: size to be filled
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}
