#include <stdlib.h>
#include <stdio.h>
/**
 * main - write a list of fibonacci numbers starting with 1 & 2
 * Description: add even fib nums less than 4 mil and print results
 * Return: 0
 */
int main(void)
{
	long a, b, c, result;

	a = 1;
	b = 2;
	result = 2;

	while (1)
	{
		c = a + b;
		if (!(c % 2))
		{
			if (c > 4000000)
			{
				break;
			}
			else
			{
				result = result + c;
			}
		}
		a = b;
		b = c;
	}

	printf("%ld\n", result);

	return (0);
}
