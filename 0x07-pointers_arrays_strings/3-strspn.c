#include "string.h"
#include "main.h"

/**
 * _strspn - first inital chars
 * @s: string to check from
 * @accept: accepted chars
 * Return: number of the number
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s && strchr(accept, *s++))
	{
		count++;
	}
	return (count);
}
