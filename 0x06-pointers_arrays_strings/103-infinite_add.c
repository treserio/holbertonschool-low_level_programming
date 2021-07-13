#include "holberton.h"
#include <string.h>
#include <stdio.h>
int *inf_add_hlpr(char *n1, char *n2, int carry_ovr);
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, carry_ovr = 0, sz1 = 0, sz2 = 0;
/*	int *values; */

	/* find the ends */
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
	--n1;
	--n2;

	/* reverse add the buffer, if the numbers are valid */
	for (i = 0; i < size_r && i < sz1 && i < sz2; ++i, --n1, --n2)
	{
		printf("%c+%c=%d|", *n1, *n2, (((*n1 - '0')+(*n2 - '0')+carry_ovr)));
		/* if both n1 and n2 in range */
		if (*n1 >= '0' && *n2 >= '0' && *n1 <= '9' && *n2 <= '9')
		{
			r[i] = (((*n1 - '0') + (*n2 - '0') + carry_ovr) % 10) + '0';
			carry_ovr = ((*n1 - '0') + (*n2 - '0') + carry_ovr) / 10;
		}
		/* if *n1 in range and *n2 not */
		else if (*n1 >= '0' && *n1 <= '9')
		{
			r[i] = (((*n1 - '0') + carry_ovr) % 10) + '0';
			carry_ovr = ((*n1 - '0') + carry_ovr) / 10;
		}
		/* if *n2 in range and *n1 not */
		else if (*n2 >= '0' && *n2 <= '9')
		{
			r[i] = (((*n2 - '0') + carry_ovr) % 10) + '0';
			carry_ovr = ((*n2 - '0') + carry_ovr) / 10;
		}
		/* else continue? */
		else
			continue;
	}

	return (r);
}

int *inf_add_hlpr(char *n1, char *n2, int carry_ovr)
{
	/* array container to return values, 0 = digit, 1 = carry_ovr */
	int hldr[2];
	int *pntr = hldr;

	hldr[0] = ((*n1 - '0') + (*n2 - '0') + carry_ovr) % 10;
	hldr[1] = ((*n1 - '0') + (*n2 - '0')) / 10;

	return (pntr);
}
