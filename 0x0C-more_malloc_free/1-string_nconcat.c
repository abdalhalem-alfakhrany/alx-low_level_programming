#include "main.h"
#include "memory.h"
#include "stdlib.h"

/**
 * string_nconcat - concate s1 and n of s2 to new memory space
 * @s1: first string
 * @s2: second string
 * @n: amount of s2 to copyied to s1
 * Return: NULL if failer pointer to new string if Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int s1_len, s2_len;

	if (s1)
		s1_len = strlen(s1);
	if (s2)
		s2_len = strlen(s2);

	n = (n >= s2_len) ? s2_len : n;
	new_str = malloc(s2_len + s1_len + 1);

	if (!new_str)
		return (NULL);

	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, n);

	new_str[s1_len + n + 1] = '\0';

	return (new_str);
}
