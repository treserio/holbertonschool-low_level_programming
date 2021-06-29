#include <stdlib.h>
#include <stdio.h>
/**
 * main - write a list first 100 fibonacci nums
 *
 * Return: 0
 */
int main(void)
{
	int cntr = 0;
	long a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	result = b;

	while (cntr < 98)
	{
		c = a + b;
		a = b;
		b = c;
		if (cntr < 97)
		{
			printf("%ld, ", c);
			++cntr;
		}
		else
		{
			printf("%ld\n", c);
			++cntr;
		}
	}
	return (0);
}
