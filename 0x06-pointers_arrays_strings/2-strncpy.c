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
	int cnt = 0;

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
