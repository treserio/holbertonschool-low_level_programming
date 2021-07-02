#include "holberton.h"
/**
 * print_number - print an int of unknown size without long, arrays, pointers
 * @val: input value to print
 * Return: void
 */
void print_number(int val)
{
	int far_left;
	int exponent;

	if (val < 0)
	{
		val *= -1;
		_putchar('-');
	}

	while (val > 10)
	{
		exponent = 10;
		far_left = val / 10;

		/* find the last digit */
		while (far_left >= 10)
		{
			far_left /= 10;
			exponent *= 10;
		}

		/* convert to string and putchar the value */
		/* if far_left % 10 = 0 need to print left char & 0 */
		if (far_left % 10 == 0)
		{
			_putchar((far_left / 10) + '0');
			_putchar('0');
		}
		else
			_putchar(far_left + '0');

		/* remove the farthest left digit */
		val -= exponent * far_left;
	}
	_putchar(val + '0');
}
