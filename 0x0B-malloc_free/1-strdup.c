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

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(str));
	if (!new_str)
		return (new_str);
	memcpy(new_str, str, (strlen(new_str) * sizeof(char)) + 1);
	return (new_str);
}
