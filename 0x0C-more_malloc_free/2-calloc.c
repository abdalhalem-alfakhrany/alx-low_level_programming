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
	void *array;
	int i;

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	
	for (i = 0; i < nmemb * size; i++)
		*array++ = 0;

	return (array);
}
