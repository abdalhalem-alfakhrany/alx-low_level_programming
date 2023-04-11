#include "main.h"
#include "memory.h"
#include "stdlib.h"

/**
 * _strdup - create new array and copy str to it
 * @str: the string to copyied
 * Return: pointer to the new array or NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	int str_len = 0;

	if (str)
		str_len = strlen(str);
	else
		return (NULL);
	new_str = malloc(str_len + 1);
	if (!new_str)
		return (new_str);
	memcpy(new_str, str, str_len);
	new_str[str_len] = '\0';
	return (new_str);
}
