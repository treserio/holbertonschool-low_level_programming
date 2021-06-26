#include <stdio.h>
/**
 * main - write out the alphabet
 *
 * Return: z to a
 */
int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr <= 'a'; --ltr)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
