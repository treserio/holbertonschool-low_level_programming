#include <stdlib.h>
#include <stdio.h>
#define bil 1000000000
/**
 * main - write a list first 100 fibonacci nums
 * Description: 9,223,372,036,854,775,807 potential range for long, break apart
 * after billions to left / right
 * Return: 0
 */
int main(void)
{
	unsigned long a1 = 0, a2 = 1, b1, b2 = 2, result1, result2, chek = 0;
	int cntr = 2;

	printf("%ld, %ld, ", a2, b2);
	for (cntr = 2; cntr < 98; ++cntr)
	{
		while (chek == 0)
		{
			result2 = a2 + b2;
			a2 = b2;
			b2 = result2;
			printf("%ld, ", result2);
			++cntr;
			chek = a2 / bil;
		}
		if (a1 == 0)
		{
			a1 = a2 / bil;
			a2 = a2 % bil;
			b1 = b2 / bil;
			b2 = b2 % bil;
		}
		result1 = (a1 + b1) + ((a2 + b2) / bil);
		result2 = (a2 + b2) % bil;
		printf("%lu%09lu", result1, result2);
		if (cntr < 97)
			printf(", ");
		a1 = b1;
		a2 = b2;
		b1 = result1;
		b2 = result2;
	}
	printf("\n");
	return (0);
}
