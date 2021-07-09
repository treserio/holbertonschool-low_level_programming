#include "holberton.h"
/**
 * leet - convert [AEOTL] & [aeotl] to [43071] respectively
 * @leet_me: pointer to string array to modify
 * Return: the modified string
 */
char *leet(char *leet_me)
{
	int i, test;
	char NORMY[] = "AEOTL";
	char normy[] = "aeotl";
	char l33t[] = "43071";

	while (leet_me[i])
	{
		for (test = 0; test < 5; ++test)
		{
			if (leet_me[i] == NORMY[test] || leet_me[i] == normy[test])
				leet_me[i] = l33t[test];
		}
		++i;
	}

	return (leet_me);
}
