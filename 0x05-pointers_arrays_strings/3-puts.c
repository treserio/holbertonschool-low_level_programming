#include "holberton.h"
/**
 * _puts - prints out the string argument one char at a time
 * @str: pointer to a string array
 * Return: void
 */
void _puts(char *str)
{
	int size = 0;
	char *start = str;

	while (*str != '\0')
	{
		++size;
		str++;
	}

	while (size--)
	{
		_putchar(*start);
		start++;
	}
	_putchar('\n');
}
