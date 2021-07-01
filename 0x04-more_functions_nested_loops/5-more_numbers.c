#include "holberton.h"
/**
 * more_numbers - print [1-14] 10x
 * Return: nothing
 */
void more_numbers(void)
{
	int otr = 10, inr, tens, ones;

	while (otr--)
	{
		for (inr = 0;  inr < 15; ++inr)
		{
			tens = inr / 10;
			ones = inr % 10;

			if (tens != 0)
				_putchar(tens + '0');

			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
