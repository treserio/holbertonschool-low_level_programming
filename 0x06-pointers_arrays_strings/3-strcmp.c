#include "holberton.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: index of deviant char in the strings or zero if match
 */
int _strcmp(char *s1, char *s2)
{
	int i, chk = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			chk = s1[i] - s2[i];
			break;
		}
	}

	return (chk);
}
