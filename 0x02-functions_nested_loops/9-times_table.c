#include "holberton.h"
/**
 * times_table - print out a times table 0-9
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, result, tens, ones;

	for (y = 0; y < 10; ++y)
	{
		for (x = 0; x < 10; ++x)
		{
			if (y == 0)
			{
				_printchar('0');
				_printchar(',');
				_printchar(' ');
			}
			else
			{
				result = y * x;
				if (result > 9)
				{
					tens = result / 10;
					ones = result % 10;
					_putchar(tens + '0');
					_putchar(ones + '0');
					if (x < 9)
					{
						_putchar(',');
						_putchar(' ');

					}
				}
				else
				{
					_putchar(' ');
					_putchar(result + '0');
					if (x < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
