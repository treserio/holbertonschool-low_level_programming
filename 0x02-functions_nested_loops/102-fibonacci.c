#include <stdlib.h>
#include <stdio.h>
/**
 * main - write a list of fibonacci numbers starting with 1 & 2
 * Return: 0
 */
int main(void)
{
	int cntr;
	long a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);

	for (cntr = 0; cntr < 48; ++cntr)
	{
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;
		if (cntr < 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
