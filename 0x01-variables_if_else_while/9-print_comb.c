#include <stdio.h>
/**
 * main - print 0, 1, 2, 3,...
 *
 * Return: zed
 */
int main(void)
{
	int val;

	for (val = 48; val < 58; ++val)
	{
		putchar(val);
		if (val != 57)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
