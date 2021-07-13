#include "holberton.h"
#include <string.h>
#include <stdio.h>
int *inf_add_hlpr(char *n1, char*n2, int carry_ovr);
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, carry_ovr = 0, sz1 = 0, sz2 = 0;
	int values[2];

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
	for (i = 0; i < size_r; ++i, --n1, --n2)
	{
		/* if both n1 and n2 in range */
		if (*n1 >= '0' && *n2 >= '0' && *n1 <= '9' && *n2 <= '9')
		{
			values = inf_add_hlpr(*n1, *n2, carry_ovr);
			r[i] = values[0];
			carry_ovr = values[1];
		}
		/* if *n1 in range and *n2 not */
		else if (*n1 >= '0' && *n1 <= '9')
		{
			values = inf_add_hlpr(*n1, '0', carry_ovr);
			r[i] = values[0];
			carry_ovr = values[1];
		}
		/* if *n2 in range and *n1 not */
		else if (*n2 >= '0' && *n2 <= '9')
		{
			values = inf_add_hlpr('0', *n2, carry_ovr);
			r[i] = values[0];
			carry_ovr = values[1];
		}
		/* else continue? */
		else
			continue;
	}

	return (r);
}

int *inf_add_hlpr(char *n1, char*n2, int carry_ovr)
{
	/* array container to return values, 0 = digit, 1 = carry_ovr */
	int hldr[2];

	hldr[0] = ((*n1 - '0') + (*n2 - '0') + carry_ovr) % 10;
	hldr[1] = ((*n1 - '0') + (*n2 - '0')) / 10;

	return (hldr);
}
