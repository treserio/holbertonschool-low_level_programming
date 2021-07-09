#include "holberton.h"
#include "string.h"
/**
 * _strspn - find the length of a string
 * @ltr: string pointer
 * Return: int value of length of the string
 */

unsigned int _strspn(char *str, char *vals);
{
	int cnt = 0, i;

	while(*str)
	{
		for (i = 0; vals[i]; ++i)
		{
			if (*str == vals[i])
				++cnt
				break;
		}
		++str;
	}
	return (cnt);
}