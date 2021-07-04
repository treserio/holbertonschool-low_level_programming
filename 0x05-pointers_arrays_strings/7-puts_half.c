#include "holberton.h"
/**
 * puts_half - prints the 2nd half of a string
 * @str: pointer to a string array
 * Return: void
 */
void _puts(char *str)
{
	int size = 0, start;
	
	while (str[size])
		++size;

	start = size / 2;
	
	while (str[start])
	{
		_putchar(str[start]);
		++start;
	}
	_putchar('\n');
}
