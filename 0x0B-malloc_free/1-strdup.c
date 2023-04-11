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
	int str_len;

	if (str == NULL)
		return (NULL);

	str_len = strlen(str);
	new_str = malloc(str_len * sizeof(char));
	if (!new_str)
		return (new_str);
	memcpy(new_str, str, str_len * sizeof(char));
	new_str[str_len - 1] = '\0';
	return (new_str);
}
