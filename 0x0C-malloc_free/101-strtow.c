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

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char *) * 3);

	size = strlen(str);
	/* strcspn() finds first occurance of ' ' in str */
	for (i = 0; i < size; i++)
	{
		loc = strcspn(str + i, space);
		if (loc > 0)
		{
			printf("%d", loc);
			word = malloc(loc+1);
			strncpy(word, str + i, loc);
			for (j = 0; word[j]; ++j)
				printf("%c\n", word[j]);

			strcat(word, "\0");
			printf("%s", word);
			arr[0] = word;
			i += loc;
		}
		else
		{
			continue;
		}
		printf(":%d\n", i);
	}

	/* go until last word, still needs to be grabbed */
	return (arr);
}