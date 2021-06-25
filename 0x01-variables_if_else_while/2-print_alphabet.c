#include <stdio.h>
/**
 * main - write out the alphabet
 *
 * Return: A to Z
 */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ++ltr)
	{
		putchar(ltr);
	}
	putchar("\n");
	return (0);
}
