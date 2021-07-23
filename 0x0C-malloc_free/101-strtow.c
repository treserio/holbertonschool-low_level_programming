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
	char *space = " ";
	char **arr;

	/* loop through str and if ! isspace chk = 1, if chk = 0 all spaces */
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
			arr[j] = malloc(loc + 1);
			strncpy(arr[j], str + i, loc);
			strcat(arr[j], "\0");
			i += loc;
			++j;
			arr = realloc(arr, sizeof(char *) * (j + 1));
		}
		else
			continue;
	}
	/* str check for all spaces */
	if (j == 0)
		return (NULL);
	/* end in NULL */
	arr[j + 1] = '\0';
	return (arr);
}
