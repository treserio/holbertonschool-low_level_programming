#include <stdio.h>
/**
 * main - find the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long fact = 1, num = 612852475143;

	while (fact < num)
	{
		if (num % fact == 0)
		{
			num /= fact;
		}
		++fact;
	}
	printf("%ld\n", fact);
	return (0);
}
