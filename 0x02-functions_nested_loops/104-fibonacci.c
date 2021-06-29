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

	while (cntr < 96)
	{
		c = a + b;
		a = b;
		b = c;
		if (cntr < 95)
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
