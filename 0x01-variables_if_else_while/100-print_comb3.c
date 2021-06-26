#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all permiations of two digit numbers, except where they're the
 * Description: same number [11, 22, 33]
 * Return: 0
 */
int main(void)
{
	int tens, ones;

	for (tens = 48; tens <= 57; ++tens)
	{
		for (ones = tens + 1; ones <= 57; ++ones)
		{
			putchar(tens);
			putchar(ones);
			if (tens != 56 && ones != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
