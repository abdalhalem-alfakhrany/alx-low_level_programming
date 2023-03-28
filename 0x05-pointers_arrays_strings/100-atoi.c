#include "ctype.h"
#include "stdio.h"
#include "string.h"
#include "main.h"

/**
 * _atoi - convert string to number 
 * @s: string to be converted
 * Return: th enumber of the string
*/
int _atoi(char *s)
{
	int length = strlen(s),	i, j, lastSign = 0, number = 0;
	
	for (i = 0; i < length; i++)
	{
		if (isdigit(s[i]))
		{
			for (j = i; isdigit(s[j]); ++j)
				number = (number * 10) + (s[j] - '0');
			break;
		}
	
		if (s[i] == '+')
			lastSign += 1;
		if (s[i] == '-')
			lastSign -= 1;
	}
	return ((lastSign >= 0) ? number : -1 * number);
}
