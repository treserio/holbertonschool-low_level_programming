#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - malloc a grid of int values height * width in dimensions
 * @width: columns in the grid
 * @height: rows in the grid
 * Return: pntr to a pntr for a grid array
 */
int **alloc_grid(int width, int height)
{
	int **arr, col, row;

	/* value check */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* start with a pntr to a pntr so we can correctly add to it */
	arr = malloc(sizeof(int *) * height);
	/* malloc return check */
	if (arr == NULL)
		return (NULL);

	for (row = 0; row < height; ++row)
	{
		arr[row] = malloc(sizeof(int) * width);
		if (arr[row] == NULL)
		{
			for (col = 0; col < row; ++col)
				free(arr[col]);
			free(arr);
			return (NULL);
		}
		else
		{
			for (col = 0; col < width; ++col)
				arr[row][col] = 0;
		}
	}
	return (arr);
}
