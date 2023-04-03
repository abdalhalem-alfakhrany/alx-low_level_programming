#include "main.h"

/**
 * _strchr - return pointer to first occure of char
 * @s: string to search in
 * @c: char to find
 * Return: pointer to first ocuure
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
			
		s++;
	}
	return (s);
}
