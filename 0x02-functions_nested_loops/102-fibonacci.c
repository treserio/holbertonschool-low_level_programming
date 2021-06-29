#include <stdlib.h>
#include <stdio.h>
/**
 * main - write a list of fibonacci numbers starting with 1 & 2
 * Return: nothing
 */
void main(void)
{
	int cntr, a, b, c;

	a = 1;
	b = 2;

	for (cntr = 0; cntr < 48; ++cntr)
	{
		printf("%d, ", a);
		printf("%d, ", b);
		c = a + b;
		a = b;
		b = c;
	}
}
