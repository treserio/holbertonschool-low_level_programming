#include "holberton.h"
#include "stdio.h"
/**
 * _memcpy - replace dest with src string till end value
 * @dest: starting location for replacing values with src
 * @src: string to replace the buffer dest with
 * @untl: replace values until
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int untl)
{
	unsigned int i = 0;

	while (i < untl)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
