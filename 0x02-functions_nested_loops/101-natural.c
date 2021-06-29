#include <stdio.h>
/**
 * main - sums the multiples of 3 or 5 below 1024
 *
 * Return: sumation of values % 3 or % 5
 */
int main(void)
{
	int cntr = 0;
	long result = 0;

	while (cntr < 1024)
	{
		if (!(cntr % 3) || !(cntr % 5))
		{
			result = 0 + cntr;
		}
		++cntr;
	}
	printf("%ld\n", result);
	return (0);
}
