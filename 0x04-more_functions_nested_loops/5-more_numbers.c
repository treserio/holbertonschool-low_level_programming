#include "holberton.h"
/**
 * more_numbers - print [1-14] 10x
 * Return: nothing
 */
void print_most_numbers(void)
{
	int otr = 10, inr, tens, ones;

	while (--otr)
	{
		for (inr = 0;  inr < 15; ++inr)
		{
			if (inr % 10)
			{
				tens = inr / 10;
				ones = inr % 10;
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(inr + '0');
			}
		}
	}
	_putchar('\n');
}
