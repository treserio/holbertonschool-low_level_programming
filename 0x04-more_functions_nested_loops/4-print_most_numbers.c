#include "holberton.h"
/**
 * print_numbers - prints [0-9] excluding 2 & 4
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		if ((i != 50) && (i != 52))
			_putchar(i);
	}

	_putchar('\n');
}
