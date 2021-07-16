#include "holberton.h"
#include <string.h>
/**
 * _strspn - find how long a string is a part of a substring
 * @str: string pointer to check
 * @vals: values to comapare string chars against
 * Return: number of chars from string that are a part of vals
 */
unsigned int _strspn(char *str, char *vals)
{
	unsigned int cnt = 0;
	char hldr[2];

	hldr[0] = *str;
	hldr[1] = '\0';

	/* check for NULL str */
	if (*str == '\0')
	{
		return (0);
	}

	while (strstr(vals, hldr))
	{
		++cnt;
		++str;
		if (*str)
			hldr[0] = *str;
		else
			break;
	}
	return (cnt);
}
