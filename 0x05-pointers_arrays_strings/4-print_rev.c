#include "holberton.h"
/**
 * print_rev - reverses the string fed it through pointer
 * @str: pointer to an int value to be reset
 * Return: void
 */
void print_rev(char *str)
{
	int length = 0;

	/* find the length */
	while (*str)
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
	_putchar('\n');
}
