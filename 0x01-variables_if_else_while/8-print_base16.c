#include <stdio.h>
/**
 * main - print 0-16 in hex + \n
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '1'; i <= '9'; ++i)
	{
		putchar(i);
	}
	for (i = 'a'; i < 'g'; ++i)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
