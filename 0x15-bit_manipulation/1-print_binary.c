#include "holberton.h"
/**
 * print_binary - convert binary string to unsigned int
 * @val: the value to print in binary
 * Return: void
 */
void print_binary(unsigned long int val)
{
	if (val > 1)
		print_binary(val >> 1);

	_putchar((val & 1) + '0');
}
