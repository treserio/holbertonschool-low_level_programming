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
		if ((ltr == 'q') || (ltr == 'e'))
		{
			continue;
		} else
		{
			putchar(ltr);
		}
	}
	putchar('\n');
	return (0);
}
