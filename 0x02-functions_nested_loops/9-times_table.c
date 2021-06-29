#include "holberton.h"
/**
 * times_table - print out a times table 0-9
 *
 * Return: void
 */

void times_table(void)
{
	int x, y;

	for (y=0; y<10; ++y)
	{
		for (x=0; x<10; ++x)
		{
			_putchar((y*x));
			_putchar(',');
			_putchar(' ');
		}
	}
}
