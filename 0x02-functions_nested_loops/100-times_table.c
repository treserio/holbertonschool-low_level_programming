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
				int hundreds = result / 100;
				int tens = result / 10;
				int ones = result % 10;

				tbl_out(x, hundreds, tens, ones);
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
		put_comma();
	}
	else
	{
		if (hundo == 0)
			_putchar(' ');
		else
			putchar(hundo);

		if (tenso == 0)
			_putchar(' ');
		else
			putchar(hundo);

		putchar(oneso);
		_putchar(',');
		_putchar(' ');
	}
}
