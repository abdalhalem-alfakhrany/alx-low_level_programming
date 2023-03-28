#include "math.h"
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
	int length = strlen(s),	i, lastSign = 0;
	int	numberStrLast = 0, startNumber, number;
	char numberStr[32];

	for (i = 0; i < 32; i++)
		numberStr[i] = '\0';
	for (i = 0; i < length; i++)
	{
		char current = s[i];

		if (current == '+')
		{
			lastSign += 1;
			continue;
		}
		if (current == '-')
		{
			lastSign -= 1;
			continue;
		}
		if (current >= '0' && current <= '9')
		{
			startNumber = 1;
			numberStr[numberStrLast++] = current;
			continue;
		}

		if (startNumber)
			break;
	}
	for (i = 0; i < numberStrLast; i++)
		number = number * 10 + (numberStr[i] - '0');
	return ((lastSign >= 0) ? number : -1 * number);
}
