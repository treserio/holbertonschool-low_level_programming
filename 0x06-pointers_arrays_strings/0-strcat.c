#include "holberton.h"
#include <stdlib.h>
/**
 * _strcpy - copy string by pntr and return pntr
 * @dest: place copy here
 * @src: string to be copied
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int str_sz = 0;

	/* find the length of dest */
	while (dest[str_sz])
		++str_sz;

	while (*src)
	{
		dest[str_sz] = *src;
		++str_sz;
		++src
	}

	return (dest);
}
