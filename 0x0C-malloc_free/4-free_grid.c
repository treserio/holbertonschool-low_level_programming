#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - malloc a grid of int values height * width in dimensions
 * @grid: a two dimensional array
 * @height: the number of rows of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row;

	/* check what exists? */
	if (grid == NULL)
		return;
	if (height == 0)
		return;

	for (row = height; row >= 0; --row)
	{
		if (grid[row])
			free(grid[row]);
	}

	free(grid);
}
