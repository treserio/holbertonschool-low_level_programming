#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * strtow - split strings into words
 * @str: string to split
 * Return: pointer to an array of words
 */
char **strtow(char *str)
{
	int loc, i, size, j;
	char *space = " ", *word;
	char **arr;

	if (str == NULL || *str == '\0' || strlen(str) == 1)
		return (NULL);

	arr = malloc(sizeof(char *));
	if (arr == NULL)
		return (NULL);

	size = strlen(str);
	/* strcspn() finds first occurance of ' ' in str */
	for (i = 0, j = 0; i < size; ++i)
	{
		loc = strcspn(str + i, space);
		if (loc > 0)
		{
			word = malloc(loc + 1);
			strncpy(word, str + i, loc);
			strcat(word, "\0");
			arr = realloc(arr, sizeof(char *) * j + 1);
			arr[j] = word;
			i += loc;
			++j;
		}
		else
		{
			continue;
		}
	}
	/* end in NULL */
	arr = realloc(arr, sizeof(char *) * j + 1);
	arr[j + 1] = NULL;

	return (arr);
}
