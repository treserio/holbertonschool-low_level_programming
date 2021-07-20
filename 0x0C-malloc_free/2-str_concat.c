#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 * str_concat - contatonate 2 strings
 * @s1: the first string to add s2 to
 * @s2: string to add to the end of s1
 * Return: pntr to result, or NULL if s1 & s2 are NULL or out of
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size = 0;
	char *res;

	/* reassign NULL values to "" */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	res = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	for (size = 0; *s1; ++size, ++s1)
	{
		res[size] = *s1;
	}
	for (; *s2; ++size, ++s2)
	{
		res[size] = *s2;
	}

	res[size + 1] = '\0';
	return (res);
}
