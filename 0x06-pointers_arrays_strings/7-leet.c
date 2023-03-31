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

	char leetTable[5] = "aeotl";
	int replaceTable[5] = {4, 3, 0, 7, 1};

	for (i = 0; i < strLength; i++)
	{
		char replace = str[i];
		int j;

		for (j = 0; j < 5; j++)
			if (replace == leetTable[j] || replace == leetTable[j] - 32)
			{
				replace = '0' + replaceTable[j];
				break;
			}

		str[i] = replace;
	}
	return (str);
}
