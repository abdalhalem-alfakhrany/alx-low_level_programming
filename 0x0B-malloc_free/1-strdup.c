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
	if (!str)
		return (NULL);

	char *new_str;

	new_str = malloc(sizeof(str));
	if (!new_str)
		return (new_str);
	memcpy(new_str, str, sizeof(str));

	return (new_str);
}
