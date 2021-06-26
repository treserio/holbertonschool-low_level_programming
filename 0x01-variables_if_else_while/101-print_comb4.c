#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all permiations of two digit numbers, except where they're the
 * Description: same number [11, 22, 33]
 * Return: 0
 */
int main(void)
{
	int hund, tens, ones;

	for (hund = 48; hund <= 57; ++hund)
	{
		for (tens = hund + 1; tens <= 57; ++tens)
		{
			for (ones = tens + 1; ones <= 57; ++ones)
			{
				putchar(hund);
				putchar(tens);
				putchar(ones);
				if (hund != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
