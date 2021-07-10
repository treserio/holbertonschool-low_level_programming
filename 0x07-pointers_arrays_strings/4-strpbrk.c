#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - finds trgt in hldr
 * @trgt: target character to find in hldr
 * @hldr: the holder of the target of trgt
 * Return: pointer to occurrence
 */
char *_strpbrk(char *hldr, char *trgt)
{
	int i;

	while (*hldr)
	{
		for (i = 0; trgt[i]; i++)
		{
			if (*hldr == trgt[i])
				return (hldr);
		}
		hldr++;
	}

	return (NULL);
}