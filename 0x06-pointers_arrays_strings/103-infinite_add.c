#include "holberton.h"
#include <string.h>
#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, carry_ovr = 0, digit, sz1 = 0, sz2 = 0;
    int ar1[size_r], ar2[size_r];

    while (*n1)
	{
        ++sz1;
		++n1;
	}
    while (*n2)
	{
        ++sz2;
		++n2;
	}

	/* reverse the val and add to buffer */
	for (i = 0; i < size_r && i < sz1 && i < sz2; ++i, --n1, --n2)
	{
		digit = ((*n1 - '0') + (*n2 - '0') + carry_ovr) % 10;
		r[i] = digit + '0';
		carry_ovr = (ar2[i] + ar2[i]) / 10;
	}
	
	return (r);
}
