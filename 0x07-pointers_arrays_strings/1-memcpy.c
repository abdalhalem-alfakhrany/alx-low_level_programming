#include "main.h"

/**
 * _memcpy - copy n bytes form src to dest
 * @dest: destnation pointer
 * @src: source pointer
 * @n: size of memory to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
