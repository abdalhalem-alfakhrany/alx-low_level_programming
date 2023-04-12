#include "main.h"
#include "stdlib.h"

/**
 * free_grid - free 2d array
 * @grid: the 2d array
 * @height: the 2d array length
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
