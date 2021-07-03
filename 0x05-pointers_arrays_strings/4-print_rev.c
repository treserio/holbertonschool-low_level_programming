#include "holberton.h"
/**
 * print_rev - 
 * @s: pointer to an int value to be reset
 * Return: void
 */
void print_rev(char *str)
{
	int length = 0;

	/* find the length */
	while (*str != '\0')
	{
		++str;
		++length;
	}
	--str;
	++length;
	/* reverse the string */
	while (length--)
	{
		_putchar(*str);
		--str;
	}
	_putchar('\n');
}
