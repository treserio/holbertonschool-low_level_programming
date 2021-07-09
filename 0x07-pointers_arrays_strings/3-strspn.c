#include "holberton.h"
#include "string.h"
/**
 * _strspn - find the length of a string
 * @ltr: string pointer
 * Return: int value of length of the string
 */

unsigned int _strspn(char *str, char *vals)
{
	unsigned int cnt = 0;
	char hldr[2];

	hldr[0] = *str;
	hldr[1] = '\0';

	while(strstr(vals, hldr))
	{
		++cnt;
		++str;
		hldr[0] = *str;
	}
	return (cnt);
}
