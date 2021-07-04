#include "holberton.h"
/**
 * puts_half - prints the 2nd half of a string
 * @str: pointer to a string array
 * Return: void
 */
void _puts(char *str)
{
	int size = 0;
	
	while (str[size])
		++size;

	int start = size / 2;
	
	while (str[start])
	{
		_putchar(str[start]);
		++start;
	}
	_putchar('\n');
}
