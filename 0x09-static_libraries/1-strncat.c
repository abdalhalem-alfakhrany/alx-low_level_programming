#include "main.h"

/**
 * _strncat - concatinate n amount from src to dest
 * @dest: the string to be appended to
 * @src: the string to be appended
 * @n: the appended string length
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i++] = src[j];
	return (dest);
}
