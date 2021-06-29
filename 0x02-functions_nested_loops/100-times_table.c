#include "holberton.h"
/**
 * print_times_table - print out a times table to the _nth power
 * @_n: input value to decide table length
 * Return: void
 */
void print_times_table(int _n)
{
	if (_n > 15 || _n < 0)
	{
	}
	else
	{
		int x, y, result;

		for (y = 0; y <= _n; ++y)
		{
			for (x = 0; x <= _n; ++x)
			{
				result = y * x;
				tbl_out(x, result);
			}
			_putchar('\n');
		}
	}
}
/**
 * tbl_out - print ", " where needed
 * @inner: loop value, x
 * @multi: result value, or any int
 * Return: void
 */
void tbl_out(int inner, int multi)
{
	int tens = multi / 10;
	int ones = multi % 10;

	if (inner == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	} else if (multi < 10)
	{
		_putchar(' ');
		_putchar(multi + '0');
		if (inner < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	} else
	{
		_putchar(tens + '0');
		_putchar(ones + '0');
		if (inner < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
