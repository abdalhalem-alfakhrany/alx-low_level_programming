#include "main.h"
#include "string.h"

/**
 * rev_string - reverse string
 * @s: the string to ber revived
 * Return: void
 */
void rev_string(char *s)
{
	int length = strlen(s), i = length - 1;
	char tmp;

	for (; i >= length / 2; --i)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
