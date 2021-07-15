#include "holberton.h"
/**
 * _strlen - find the length of a string
 * @ltr: string pointer
 * Return: int value of length of the string
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
