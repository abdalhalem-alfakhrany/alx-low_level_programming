#include "main.h"
#include "stdlib.h"
#include "memory.h"

/**
 * alloc_grid - allocate 2d array of size width * height
 * @width: grid width
 * @height: grid height
 * Return: NULL if failer pointer to arrat if Success
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (!array[i])
		{
			for (j = 0; j <= i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
