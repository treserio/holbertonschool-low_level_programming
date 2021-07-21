#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - malloc a grid of int values height * width in dimensions
 * @width: columns in the grid
 * @height: rows in the grid
 * Return: pntr to a pntr for a grid array
 */
void free_grid(int **grid, int height)
{
	int row;

	/* check what exists? */
	if (grid == NULL);
		return (NULL);
	if (height == NULL || height == 0)
		return (NULL);

	for (row = height; row > 0; --row)
	{
		if (grid[row])
			free (grid[row]);
	}

	free (grid);
	return (0);
}