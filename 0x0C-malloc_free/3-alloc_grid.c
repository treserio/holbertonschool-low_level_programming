#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - create a duplicate array of str
 * @str: the string to copy
 * Return: pntr to dup, or NULL if str NULL or insufficient mem
 */
int **alloc_grid(int width, int height)
{
	int **arr, col, row;

	/* value check */
	if (width <= 0 || height <= 0)
		return(NULL);

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
				free (arr[row]);
			free (arr);
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