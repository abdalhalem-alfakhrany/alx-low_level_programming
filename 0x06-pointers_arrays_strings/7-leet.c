#include "main.h"
#include "string.h"

/**
 * leet - the legend speach
 * @str: the speach to compiled
 * Return: the string after leeting
 */
char *leet(char *str)
{
	int i, strLength = strlen(str);

	char leetTable[9][2] = {
		"oO",
		"lL",
		"",
		"",
		"eE",
		"aA",
		"",
		"tT",
		"tT"
	};

	for (i = 0; i < strLength; i++)
	{
		char replace = str[i];
		int j;

		for (j = 0; j < 8; j++)
			if (strchr(leetTable[j], replace))
			{
				replace = '0' + j;
				break;
			}

		str[i] = replace;
	}
	return (str);
}
