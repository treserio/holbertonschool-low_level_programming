#include "holberton.h"
/**
 * rev_string - reverses the string fed it through pointer
 * @str: pointer to an int value to be reset
 * Return: void
 */
void rev_string(char *str)
{
	int length = 0;

	/* find the length */
	while (*str != '\0')
	{
		++str;
		++length;
	}
	--str;

	/* reverse the string */
	while (length--)
	{
		_putchar(*str);
		--str;
	}
}
