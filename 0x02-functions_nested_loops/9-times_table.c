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
			result = y * x;
			tbl_out(y, x, result);
		}
		_putchar('\n');
	}
}
/**
 * tbl_out - print ", " where needed
 * @out: outer loop value, y
 * @inner: loop value, x
 * @multi: result value, or any int
 * Return: void
 */
void tbl_out(int out, int inner, int multi)
{
	int tens = multi / 10;
	int ones = multi % 10;

	if (out == 0)
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
		_putchar(',');
		_putchar(' ');
	}
}
