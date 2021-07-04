#include "holberton.h"
/**
 * puts_half - prints the 2nd half of a string
 * @str: pointer to a string array
 * Return: void
 */
void puts_half(char *str)
{
	int size = 0, start;

	while (str[size])
		++size;

	if (size % 2 == 0)
		start = size / 2;
	else
		start = (size+1) / 2;

	for (; start < size; start++)
		_putchar(str[start]);
	_putchar('\n');
}
