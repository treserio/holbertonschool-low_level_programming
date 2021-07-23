#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - create an array of ints from min to max
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: pointer to array of ints
 */
int *array_range(int min, int max)
{
	int *dest, i;

	if (max - min < 0)
		return (NULL);

	if (min == max)
		dest = malloc(sizeof(int));
	else
		dest = malloc(sizeof(int) * (max - min));

	for (i = 0; min <= max; ++min, ++i)
	{
		*(dest + i) = min;
	}

	return (dest);
}
