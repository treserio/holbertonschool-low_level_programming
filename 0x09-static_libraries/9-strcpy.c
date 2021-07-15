#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcpy - copy string by pntr and return pntr
 * @dest: place copy here
 * @src: string to be copied
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	/* loop through and copy chars from string to dest */
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}

	*dest = '\0';

	return (start);
}
