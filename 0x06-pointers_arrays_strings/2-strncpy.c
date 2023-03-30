#include "main.h"

/**
 * _strncpy - copy the size n string from soruce to destination
 * @dest: the destination array
 * @src: the source array
 * @n: size to be copyed
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && dest[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	return (dest);
}
