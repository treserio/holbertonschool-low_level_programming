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
	int i = 0;

	while (src[i] && i < end)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < end)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
