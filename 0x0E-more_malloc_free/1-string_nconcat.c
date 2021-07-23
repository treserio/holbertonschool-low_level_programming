#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - malloc memory and concatonate S2 to S1 num chars
 * @s1: initial string
 * @s2: second string to add to s1 num places
 * @num: number of chars to add from s2
 * Return: pointer to concatonated string, or NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int num)
{
	unsigned int i, j;
	char *concat;

	/* convert NULLs to "" */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat = malloc(sizeof(s1) + num);
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; ++i)
		concat[i] = s1[i];

	for (j = 0; s2[j] && j < num; ++j, ++i)
		concat[i] = s2[j];

	concat[i] = '\0';
	return (concat);
}
