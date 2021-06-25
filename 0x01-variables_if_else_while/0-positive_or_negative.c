#include <stdlib.h>
#include <time.h>
#include <stdio>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this 
 * 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
	if (n > 0)
	{
		printf("%d is positive", n);
	} elif (n == 0)
	{
		printf("%d is zero", n);
	} elif ( n < 0 )
	{
		printf("%d is negative", n);
	}
	return (0);
}