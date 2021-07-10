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
	int i = 0;

	while (*str)
	{
		for (i = 0; vals[i] != 0; i++)
		{
			if (*str == vals[i])
			{
				cnt++;
				break;
			}
			else if (!vals[i + 1])
				return (cnt);
		}
		str++;
	}
	return (cnt);
}
