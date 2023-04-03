#include "string.h"
#include "main.h"

/**
 * _strchr - return pointer to first occure of char
 * @s: string to search in
 * @c: char to find
 * Return: pointer to first ocuure
 */
char *_strchr(char *s, char c)
{
	int length = strlen(s), i;

	for (i = 0; i < length; i++)
		if (s[i] == c)
			return (&s[i]);
	return (s);
}
