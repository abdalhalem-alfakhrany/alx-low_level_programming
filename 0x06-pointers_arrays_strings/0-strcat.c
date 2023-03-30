#include "main.h"
#include "string.h"

/**
 * _strcat - concatinate tow strings
 * @dest: the string to be appended to
 * @src: the string to be appended
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int destLength = strlen(dest);
	int srcLength = strlen(src);
	int i;

	for (i = 0; i < srcLength; i++)
		dest[destLength + i] = src[i];

	dest[destLength + srcLength] = '\0';
	return (dest);

}
