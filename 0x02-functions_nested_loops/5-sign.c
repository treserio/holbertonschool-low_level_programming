#include "holberton.h"
/**
 * print_sign - tells if an int is positive, negative, or zero
 * @check: value to be checked
 * Return: + if greater than zero, zero if zero, - if less than zero
 */

int print_sign(int check)
{
	if (check < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (check == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('0');
		return (-1);
	}
}
