#include "main.h"

/**
 * _strlen_recursion - recursive function to get the string length
 * @s: string to get length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	static int len;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(++s);
	}
	return (len);
}
