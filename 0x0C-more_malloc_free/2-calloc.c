#include "main.h"
#include "stdlib.h"

/**
 * _calloc - alocate nmemb count of size in memory
 * @nmemb: elements count
 * @size: size of element
 * Return: NULL if failer pointer to array if Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);

	memset(array, 0, nmemb * size);

	return (array);
}
