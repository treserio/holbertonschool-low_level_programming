#include "holberton.h"

/**
 * _strchr - find the length of a string
 * @heystack: string to look for char in
 * @needle: needle to find in heystack
 * Return: int value of length of the string
 */

char *_strchr(char *heystack, char needle)
{
	int loc = 0;

	while (heystack[loc])
	{
		if (heystack[loc] == needle)
			return (heystack + loc);
		++loc;
	}
	if (needle == 0)
		return (heystack + loc);
		
	return (0);
}
