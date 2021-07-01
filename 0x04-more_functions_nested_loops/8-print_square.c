#include "holberton.h"
/**
 * print_square - print a box of side * side dimensions
 * @side: the dimensions of the square
 * Return: nil
 */
void print_square(int side)
{
	int out, inr;

	for (out = 0; out < side; ++out)
	{
		for (inr = 0; inr < side; ++inr)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
