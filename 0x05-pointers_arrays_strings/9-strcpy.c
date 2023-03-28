#include "main.h"
#include "string.h"

/**
 * _strcpy - copy the string from soruce to destination
 * @dest: the destination array
 * @src: the source array
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int length = strlen(src), i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
