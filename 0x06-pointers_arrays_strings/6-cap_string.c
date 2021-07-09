#include "holberton.h"
/**
 * string_toupper - convert lowercase ascii to upper
 * @chr: pointer to string to convert
 * Return: pointer to converted string
 */
char *string_toupper(char *chr)
{
	char *invalid = " \n\t,;.!?(){}";
	char *start = chr;
	int word = 0;

	while (*chr)
	{
		if (word = 0)
		{
			if (*chr >= 'a' && *chr <= 'z')
				*chr -= 32;
			word = 1;
		}
		if (strstr(invalid, *chr) != 0)
			word = 0;

		++chr;
	}

	return (start);
}
