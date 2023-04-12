#include "main.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"

/**
 * argstostr - concatinate all argv in one string
 * @ac: arguments count
 * @av: arguments vector
 * Return: NULL if failer pointer to the str if Success
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int new_str_len, i, arg_len, offset = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		new_str_len += strlen(av[i]) + 1;

	new_str = malloc(new_str_len);

	if (!new_str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_len = strlen(av[i]);
		memcpy(new_str + offset, av[i], arg_len);
		offset += arg_len;
		new_str[offset++] = '\n';
	}

	return (new_str);
}
