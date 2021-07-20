#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array of char c
 * @size: the size of the array
 * @chr: the character to use in the array
 * Return: pointer to array, or NULL if size = 0
 */
char *create_array(unsigned int size, char chr)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size != 0 && arr != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			arr[i] = chr;
		}
		return (arr);
	}
	else
		return (NULL);
}
