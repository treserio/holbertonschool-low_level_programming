#include "holberton.h"
/**
 * times_table - print out a times table 0-9
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
				putcomma(y, x, 0);
			else
			{
				result = y * x;
				if (result > 9)
				{
					tens = result / 10;
					ones = result % 10;
					_putchar(tens + '0');
					_putchar(ones + '0');
					putcomma(y, x, result);
				}
				else
				{
					_putchar(' ');
					_putchar(result + '0');
					putcomma(y, x, result);
				}
			}
		}
		_putchar('\n');
	}
}
/**
 * putcomma - print ", " where needed
 * @out: outer loop value, y
 * @inner: loop value, x
 * @multi: result value, or any int
 * Return: void
 */
void putcomma(int out, int inner, int multi)
{
	if (out == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	if (multi < 10)
	{
		_putchar(' ');
		_putchar(multi + '0');
		if (inner < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
