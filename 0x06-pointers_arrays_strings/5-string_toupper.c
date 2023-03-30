#include "main.h"
#include "string.h"
#include "ctype.h"

/**
 * string_toupper - change string letters to uppercase
 * @str: the string to be upperd
 * Return: the string
 */
char *string_toupper(char *str)
{
	int i, strLength = strlen(str);

	for (i = 0; i < strLength; i++)
		str[i] = toupper(str[i]);

	return (str);
}
