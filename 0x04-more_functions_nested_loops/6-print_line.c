#include "holberton.h"
/**
 * print_line - prints '_' n times
 * @n: number of times '_' is printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
