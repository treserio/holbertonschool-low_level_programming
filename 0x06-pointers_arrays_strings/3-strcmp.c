#include "holberton.h"
/**
 * _strcmp - compare 2 strings
 * @dest: replace dest with src string till end value
 * @src: string to be copied
 * @end: the value to stop at in the src str
 * Return: pointer to the destination
 */
char *_strcmp(char *s1, char *s2)
{
	int i, chk = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			chk = i;
			break;
	}

	return (chk);
}
