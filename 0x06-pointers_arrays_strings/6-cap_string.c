#include "holberton.h"
#include <string.h>
/**
 * cap_string - convert first letter of a word to upper
 * @chr: pointer to string to convert
 * Return: pointer to converted string
 */
char *cap_string(char *chr)
{
	char *invalid = "\n\t ,;.!?(){}";
	char *start = chr;
	int word = 0;

	while (*chr)
	{
		if (word == 0)
		{
			if (*chr >= 'a' && *chr <= 'z')
				*chr -= 32;
			word = 1;
		}
		char chkr[2] = *chr;
		if (strstr(invalid, chkr) != 0)
			word = 0;

		++chr;
	}

	return (start);
}
