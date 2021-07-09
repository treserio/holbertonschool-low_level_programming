#include "holberton.h"
/**
 * string_toupper - convert lowercase ascii to upper
 * @chr: pointer to string to convert
 * Return: pointer to converted string
 */
char *string_toupper(char *chr)
{
	char *start = chr;

	while (*chr)
	{
		if (*chr >= 'a' && *chr <= 'z')
			*chr -= 32;
		++chr;
	}

	return (start);
}
