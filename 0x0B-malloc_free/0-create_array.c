#include "main.h"
#include "stdlib.h"
#include "memory.h"

/**
 * create_array - create array and return pointer to it
 * @size: the size of array
 * @c: inital char of array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;

	if (size < (unsigned int)0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	memset(array, c, sizeof(char) * size);
	return (array);
}
