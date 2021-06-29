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
		int x, y, result, hundreds, tens, ones;

		for (y = 0; y <= _n; ++y)
		{
			for (x = 0; x <= _n; ++x)
			{
				result = y * x;
				hundreds = result / 100;
				tens = result / 10;
				ones = result % 10;

				big_tbl_out(x, hundreds, tens, ones);
			}
			_putchar('\n');
		}
	}
}
/**
 * big_tbl_out - print ", " where needed
 * @inner: loop value, x
 * @hundo: hundreds value
 * @tenso: tens value
 * @oneso: ones value
 * Return: void
 */
void big_tbl_out(int inner, int hundo, int tenso, int oneso)
{
	if (inner == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		if (hundo == 0)
			_putchar(' ');
		else
			_putchar(hundo);

		if (tenso == 0)
			_putchar(' ');
		else
			_putchar(hundo);

		putchar(oneso);
		_putchar(',');
		_putchar(' ');
	}
}
