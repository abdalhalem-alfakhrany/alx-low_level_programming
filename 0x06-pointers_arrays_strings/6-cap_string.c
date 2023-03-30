#include "main.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"

/**
 * cap_string - captlize the words
 * @str: the string to bec captalized
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i, strLength = strlen(str);
	char sperators[] = {',', ';', '.', '!', '?',
	   '"', '(', ')', '{', '}', '\n', ' ', '\t'};

	for (i = 0; i < strLength; i++)
	{
		if (strchr(sperators, str[i]))
		{
			while (strchr(sperators, str[++i]))
				;

			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
