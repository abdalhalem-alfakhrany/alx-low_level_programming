#include "main.h"
#include "stdlib.h"

/**
 * array_range - allocate array of integers sized max - min
 * @min: first number
 * @max: last number
 * Return: NULL if failer pointer to arrat if Success
 */
int *array_range(int min, int max)
{
	int *array;
	int length = max - min, i;

	if (length < 0)
		return (NULL);

	array = malloc(length * sizeof(int) + sizeof(int));

	if (!array)
		return (NULL);

	for (i = 0; i <= length; i++)
		array[i] = min + i;

	return (array);
}
