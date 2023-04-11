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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc((width * sizeof(int *)));
	if (!array)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc((height * sizeof(int))+1);
		if (!array[i])
			return (NULL);
		memset(array[i], 0, height + 1);
	}
	return (array);
}
