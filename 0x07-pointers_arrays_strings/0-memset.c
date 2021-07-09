#include "holberton.h"
/**
 * _memset - replace dest with src string till end value
 * @dest: starting location for replacing values with byte
 * @byte: char to replace the buffer dest with
 * @untl: replace values until
 * Return: pointer to the destination
 */
char *_memset(char *dest, char byte, unsigned int untl);
{
	unsigned int i = 0;

	while (dest[i] && i < untl)
	{
		dest[i] = byte;
		++i;
	}
	return (dest);
}