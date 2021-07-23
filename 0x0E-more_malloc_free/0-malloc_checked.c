#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - split strings into words
 * @str: string to split
 * Return: pointer to an array of words
 */
void *malloc_checked(unsigned int num)
{
	void *thing = malloc(num);

	if (thing == NULL)
		exit (98);
	return (thing);
}
