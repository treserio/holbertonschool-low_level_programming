#include "holberton.h"
/**
 * print_number - print an int of unknown size without long, arrays, pointers
 * @val: input value to print
 * Return: void
 */
void print_number(int val)
{
	unsigned int exp, dumbthing;

	if (val < 0)
	{
		val *= -1;
		_putchar('-');
	}

	dumbthing = val;

	/* find power */
	for (exp = 10; (dumbthing / exp >= 10); exp *= 10)
	{
	}

	/* check for zero? */
	if (dumbthing > 9)
	{
		for (; exp >= 1; exp /= 10)
		{
			_putchar(((dumbthing / exp) % 10) + '0');
		}
	}
	else
		_putchar(val + '0');
}
