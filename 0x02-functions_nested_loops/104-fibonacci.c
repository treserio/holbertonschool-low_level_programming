#include <stdlib.h>
#include <stdio.h>
/**
 * main - write a list first 100 fibonacci nums
 *
 * Return: 0
 */
int main(void)
{
	int cntr = 1;
	unsigned long a, b, c;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);

	while (cntr < 100)
	{
		c = a + b;
		a = b;
		b = c;
		if (cntr < 99)
		{
			printf("%lu, ", c);
			++cntr;
		}
		else
		{
			printf("%lu\n", c);
			++cntr;
		}
	}
	return (0);
}
