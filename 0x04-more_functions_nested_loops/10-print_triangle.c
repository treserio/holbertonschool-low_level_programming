#include "holberton.h"
/**
 * print_triangle - print a triangle of "size" size
 * @size: the height and base of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int extra = 1, i;

	if (size > 0)
	{
		while (size--)
		{
			for (i = 0; i < size; ++i)
			{
				_putchar(' ');
			}
			for (i = 0; i < extra; ++i)
			{
				_putchar('#');
			}
			_putchar('\n');
			++extra;
		}
	}
	else
		_putchar('\n');
}
