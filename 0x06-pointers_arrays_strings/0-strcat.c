#include "main.h"

/**
 * _strcat - concatinate tow strings
 * @dest: the string to be appended to
 * @src: the string to be appended
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[++i] = src[j];
	}
	dest[i + 1] = '\0';
	return (dest);
}
