#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all permiations of 4 digit numbers, except where they're the
 * same number [1111, 2222, 3333]
 * Return: 0
 */
int main(void)
{
	int first, second, thou, hund, tens, ones;

	for (first = 0, first <= 98; ++first)
	{
		thou = first / 10;
		hund = first % 10;

		for (second = first + 1, second <= 99; ++second)
		{
			tens = second / 10 + '0';
			ones = second % 10 + '0';
			putchar(thou + '0');
			putchar(hund + '0');
			putchar(' ');
			putchar(tens);
			putchar(ones);
			if (first != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
