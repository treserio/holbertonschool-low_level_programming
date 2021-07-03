#include "holberton.h"
/**
 * _strlen - find the length of a string
 * @ltr: string pointer
 * Return: void
 */

int _strlen(char *ltr)
{
	int size = 0;

	while (*ltr)
	{
		++size;
		ltr++;
	}
	return (size);
}
