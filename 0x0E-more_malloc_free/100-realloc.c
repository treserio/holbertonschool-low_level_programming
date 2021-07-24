#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - create an array of ints from min to max
 * @ptr: the pointer to the previously allocated memory
 * @osz: original size of buffer
 * @nsz: new size of buffer
 * Return: pntr to newly assigned memory, with values copied
 */
void *_realloc(void *ptr, unsigned int osz, unsigned int nsz)
{
	unsigned int i;
	char *dest, *orig = ptr;

	/* new_size == old_size rtrn ptr */
	if (osz == nsz)
		return (ptr);

	if (nsz == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(nsz));

	dest = malloc(nsz);

	/* copy values from input pointer to dest */
	for (i = 0; i < nsz; ++i)
		dest[i] = orig[i];

	free(ptr);
	return (dest);
}
