#include "holberton.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: index of deviant char in the strings or zero if match
 */
char *leet(char *leet_me)
{
	int i, test;
	char l33t[] = "43071";
	char NORMY[] = "AEOTL";
	char normy[] = "aeotl";

	for (i = 0; leet_me[i]; ++i)
	{
		for (test = 0; l33t[test] != '\0'; ++test)
		{
			if (*leet_me == NORMY[test] || *leet_me == normy[test])
				*leet_me = l33t[test];
		}
	}

	return (leet_me);
}
