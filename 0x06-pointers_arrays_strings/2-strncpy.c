#include "holberton.h"
/**
 * _strncpy - replace dest with src string till end value
 * @dest: storage string for src
 * @src: string to be copied
 * @end: the value to stop at in the src str
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int end)
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

	while (*dest && cnt < end)
	{
		*dest = '\0';
		++dest;
		++cnt;
	}
	*dest = '\0';
	return (dest);
}
