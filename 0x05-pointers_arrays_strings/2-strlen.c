#include "main.h"

/**
* _strlen - calculate string length
* @s: the string to be mesured
* Return: the s string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
