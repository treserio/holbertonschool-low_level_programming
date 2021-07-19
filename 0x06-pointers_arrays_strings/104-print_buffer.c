#include <stdio.h>
#include "holberton.h"
void print_buffer(char *str, int size)
{
	int i, j;

	if (size == 0)
		printf("\n");

	/* print size chars from str */
	for (i = 0; i < size; ++i)
	{
		/* position of first byte of every 10 */
		if (i % 10 == 0)
			printf("%08x:", i);
		/* hex content 2 chars at a time, 1 % 2 = 1, every odd */
		if (i % 2)
			printf("%02x%02x", str[i - 1], str[i]);
		else
			printf(" ");
		/* if at the end of the line, print out the last 10 chars of the string */
		if (i % 10 == 9)
		{
			printf(" ");
			for (j = i - 9; j <= i; ++j)
				/* add check for printable char */
				printf("%c", str[j]);
			printf("\n");
		}
	}
}
