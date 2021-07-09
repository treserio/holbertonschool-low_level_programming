#include "holberton.h"

/**
 * _strchr - find the length of a string
 * @heystack: string to look for char in
 * @needle: needle to find in heystack
 * Return: int value of length of the string
 */

char *_strchr(char *heystack, char needle)
{
	while (*heystack)
	{
		if (*heystack == needle)
			return (heystack);

		++heystack;
	}
	if (needle == 0)
		return (heystack);

	return (0);
}
