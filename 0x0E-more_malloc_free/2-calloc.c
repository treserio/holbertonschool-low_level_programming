#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory of x elements of size bytes and assign to 0
 * @x: place src string at end of dest str
 * @size: string to be copied
 * Return: pointer to the _calloc'd memory, or NULL if x = 0, or malloc fail
 */
void *_calloc(unsigned int x, unsigned int size)
{
	int i;
	int *dest;

	if (x == 0 || size == 0)
		return (NULL);

	dest = malloc(x * size);

	for (i = 0; i < x; ++i)
		dest[i] = 0;

	return (dest);
}
