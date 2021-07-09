#include "holberton.h"
/**
 * rot13 - transform upper & lower [ABCDEFGHIJKLM] <-> [NOPQRSTUVWXYZ] in a str
 * @code: pointer to string array to modify
 * Return: the modified string
 */
char *rot13(char *code)
{
	int i = 0, test;
	char normy[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (code[i])
	{
		for (test = 0; normy[test] != '\0'; ++test)
		{
			if (code[i] == normy[test])
			{
				code[i] = rot13y[test];
				break;
			}
		}
		i++;
	}
	return (code);
}
