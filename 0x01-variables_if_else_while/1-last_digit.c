#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - the last number of a rand number and give details
* Description: betty is silly
* Return: string with variable values previously evaluated
*/

int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = abs(n % 10);
	if (rem  > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	} else if (rem == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rem);
	} else if (rem < 6)
	{
		printf("Last digit of %d is %d and is greater than 5", n, rem);
	}
	return (0);
}
