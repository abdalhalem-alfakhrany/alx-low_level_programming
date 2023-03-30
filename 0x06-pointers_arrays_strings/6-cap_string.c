#include "main.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"

/**
 * issperator - check if char is in sperators list
 * @c: the char to check
 * Return: 0 if not in list 1 if in list 2 if quatl to \t
 */
int issperator(char c)
{
	int i;
	char sperators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', ' '};

	if (c == '\t')
		return (2);

	for (i = 0; sperators[i] != '\0'; i++)
		if (c == sperators[i])
			return (1);
	return (0);
}

/**
 * cap_string - captlize the words
 * @str: the string to bec captalized
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i, strLength = strlen(str);
	char sperators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', ' '};
	
	for (i = 0; i < strLength; i++)
	{
		if (strchr(sperators, str[i]))
		{
			while (strchr(sperators, str[++i]))
				;

			str[i] = toupper(str[i]);
		}
		else if (str[i] == '\t')
			str[i--] = ' ';
	}
	return (str);
}
