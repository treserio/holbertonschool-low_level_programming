#include <stdio.h>
/**
 * main - print 1 to 100 + newline, if % 3 -> Fizz, if % 5 -> Buzz
 * Description - if both FizzBuzz
 * Return: void
 */
int main(void)
{
	int cntr;

	for (cntr = 1; cntr <= 100; ++cntr)
	{
		if (!(cntr % 3) && !(cntr % 5))
			printf("FizzBuzz");
		else if (!(cntr % 3))
			printf("Fizz");
		else if (!(cntr % 5))
			printf("Buzz");
		else
			printf("%d", cntr);
		if (cntr < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
