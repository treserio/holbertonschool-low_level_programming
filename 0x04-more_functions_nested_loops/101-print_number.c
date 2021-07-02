#include "holberton.h"
/**
 * print_number - print an int of unknown size without long, arrays, pointers
 * @val: input value to print
 * Return: void
 */
void print_number(int val)
{
	unsigned int exp;

	if (val < 0)
	{
		val *= -1;
		_putchar('-');
	}

	/* find power */
	for (exp = 10; (val / exp >= 10); exp *= 10)
	{
	}

	/* check for zero? */
	if (val > 9)
	{
		for (; exp >= 1; exp /= 10)
		{
			_putchar(((val / exp) % 10) + '0');
		}
	}
	else
		_putchar(val + '0');
}
