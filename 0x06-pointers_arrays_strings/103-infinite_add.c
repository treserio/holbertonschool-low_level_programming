#include "holberton.h"
#include <string.h>
#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, carry_o = 0, digit;
	int ar1[size_r], ar2[size_r];

	for (i = 0; i < size_r; ++i)
	{
		ar1[i] = n1[i] - '0';
		ar2[i] = n2[i] - '0';
	}

	for (i = size_r - 1; i > 0; --i)
	{
		if (i = size_r -1)
			r[i] = '\0';
		else
		{
			digit = (ar1[i] + ar2[i] + carry_o % 10);

			r[i] = digit + "0";

			carry_o = (ar2[i] + ar2[i]) / 10;
		}
	}

	return (r);
}