#include "holberton.h"
#include <stdlib.h>
/**
 * _strcat - add a string to a string
 * @dest: place src string at end of dest str
 * @src: string to be copied
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int str_sz = 0;

	/* find the length of dest */
	while (dest[str_sz])
		++str_sz;

	while (*src)
	{
		dest[str_sz] = *src;
		++str_sz;
		++src;
	}
	dest[str_sz] = '\0';
	return (dest);
}
