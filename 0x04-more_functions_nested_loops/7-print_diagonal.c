#include "holberton.h"
/**
 * print_diagonal - prints '\' n times with cumulative spacing for each one
 * @n: number of times '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int ocnt, icnt;

		for (ocnt = 0; ocnt < n; ++ocnt)
		{
			for (icnt = 0; icnt < ocnt; ++icnt)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
