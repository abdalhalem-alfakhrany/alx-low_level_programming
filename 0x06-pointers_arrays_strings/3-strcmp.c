
#include "main.h"

/**
 * _strcmp - compare the s1 and s1
 * @s1: first string
 * @s2: second string
 * Return: the diffrance between first non matching chars
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		int result = s1[i] - s2[i];

		if (result)
			return (result);
	}

	return (0);
}
