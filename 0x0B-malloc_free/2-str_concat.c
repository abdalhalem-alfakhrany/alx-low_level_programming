#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
 * str_concat - concatenate tow string to new one
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int s1_len = strlen(s1), s2_len = strlen(s2);

	new_str = malloc(s1_len + s2_len + 1);
	if (!new_str)
		return (NULL);

	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, s2_len);

	new_str[s1_len + s2_len] = '\0';

	return (new_str);
}
