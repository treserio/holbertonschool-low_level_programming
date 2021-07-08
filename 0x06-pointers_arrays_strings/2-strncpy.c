#include "holberton.h"
#include <stdlib.h>
/**
 * _strncat - add a string to a string
 * @dest: place src string at end of dest str
 * @src: string to be copied
 * @end: the value to stop at in the src str
 * Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int end)
{
	int str_sz = 0, cnt = 0;

	/* find the length of dest */
	while (dest[str_sz])
		++str_sz;

	while (*src && cnt < end)
	{
		*dest = *src;
		++dest;
		++src;
		++cnt;
	}
	*dest = '\0';
	return (dest);
}
