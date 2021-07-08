#include "holberton.h"
#include <stdlib.h>
/**
 * _strcat - add a string to a string
 * @dest: place src string at end of dest str
 * @src: string to be copied
 * @end: 
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src, int end)
{
	int str_sz = 0, cnt = 0;

	/* find the length of dest */
	while (dest[str_sz])
		++str_sz;

	while (*src && cnt < end)
	{
		dest[str_sz] = *src;
		++str_sz;
		++src;
		++cnt;
	}
	dest[str_sz] = '\0';
	return (dest);
}
