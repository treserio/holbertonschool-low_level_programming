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
	long i, len;

	len = strlen(str);

	for (i = 0; i < len; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
