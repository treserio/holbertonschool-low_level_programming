#include "holberton.h"
/**
 * print_number - print an int of unknown size without long, arrays, or pointers
 *
 * Return: void
 */
void print_number(int val)
{
	int farLeft = val / 10;
	int exponent = 1;

	if (val < 0)
	{
		        val *= -1
					_putchar('-');
	}

	while (val > 10)
	{

		/* find the last digit */
		while (farLeft > 10)
		{
			farLeft /= 10;
			exponent++;
		}

		/* convert to string and putchar the value */
		_putchar(farLeft + '0');

		/* remove the farthest left digit */
		val -= (10**exponent)*farLeft;
	}
	_putchar(val);
}
