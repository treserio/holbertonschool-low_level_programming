#include <stdio.h>
/**
 * main - print 0-9 + \n
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '1'; i <= '9'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
