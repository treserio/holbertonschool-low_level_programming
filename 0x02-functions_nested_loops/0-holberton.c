#include <unistd.h>
#include <string.h>
#include "holberton.h"
/**
 * main - I like headers
 * Return: zed
 */
int main(void)
{
	char str[] = "Holberton";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
	return (0);
}
