#include "holberton.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int *inf_add_hlpr(char *n1, char *n2, int carry_ovr);
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, carry_ovr = 0, sz1 = 0, sz2 = 0;
	int end1 = 0, end2 = 0;
	char *rev_n1, *rev_n2, *rev_r;

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

	/* allocate the buffer */
	rev_n1 = (char *) malloc(sizeof(char) * (sz1+1));
	rev_n2 = (char *) malloc(sizeof(char) * (sz2+1));
	rev_r = (char *) malloc(sizeof(char) * size_r);

	/* reverse strings */
	for (i=sz1; i > 0; --i)
	{
		*rev_n1 = *n1;
		++rev_n1;
		--n1;
	}
	for (i=sz2; i > 0; --i)
	{
		*rev_n2 = *n2;
		++rev_n2;
		--n2;
	}

	/* add null byte to finish buffer */
	*rev_n1 = '\0';
	*rev_n2 = '\0';

	rev_n1 = rev_n1 - (sz1);
	rev_n2 = rev_n2 - (sz2);

	/* walk forward through rev strings adding values */
	for (i = 0; i < size_r; ++i, ++rev_n1, ++rev_n2)
	{
		/* check if we've reached the end of a string before */
		if (*rev_n1 == '\0' && *rev_n2 == '\0')
		{
			end1 = 1;
			end2 = 1;
		}
		else if (*rev_n1 == '\0')
			end1 = 1;
		else if (*rev_n2 == '\0')
			end2 = 1;

		/* if both n1 and n2 are still strings */
		/* checks rely on end1 & end2 to know if a string has ended */
		if (end1 == 0 && end2 == 0)
		{
/*			printf("%c+%c=%d|", *rev_n1, *rev_n2, ((*rev_n1-'0')+(*rev_n2-'0')+carry_ovr));*/
			rev_r[i] = (((*rev_n1-'0')+(*rev_n2-'0')+carry_ovr) % 10) + '0';
			carry_ovr = ((*rev_n1-'0')+(*rev_n2-'0')+carry_ovr) / 10;
		}
		/* if n1 is still a string but n2 is not */
		else if (end1 == 0)
		{
			printf("%c+ =%d|", *rev_n1, ((*rev_n1-'0')+carry_ovr));
			rev_r[i] = (((*rev_n1-'0')+carry_ovr) % 10) + '0';
			carry_ovr = ((*rev_n1-'0')+carry_ovr) / 10;
		}
		/* if n2 is still a string but n1 is not */
		else if (end2 == 0)
		{
			printf(" +%c=%d|", *rev_n2, ((*rev_n2-'0')+carry_ovr));
			rev_r[i] = (((*rev_n2-'0')+carry_ovr) % 10) + '0';
			carry_ovr = ((*rev_n2-'0')+carry_ovr) / 10;
		}
		/* check for carry_ovr */
		else if (carry_ovr == 1)
		{
			rev_r[i] = carry_ovr + '0';
			carry_ovr = 0;
		}
		/* else fill buffer with null */
		else
			rev_r[i] = '\0';

	}
	/* find size of result */
	sz1 = 0;
	while (rev_r[sz1])
		++sz1;

	--sz1;
	printf("\n%s\n", rev_r);
	/* reverse the result */
	for (i = 0; i <= sz1; ++i)
	{
		r[i] = rev_r[sz1-i];
		printf("_%c_", rev_r[sz1-i]);
	}

	++i;
	if (i > size_r)
		return (0);
	else
		for (; i < size_r; ++i)
			r[i]='\0';

    /* free up the allocation, keeps failing
	rev_n1 -= size_r;
	rev_n2 -= size_r;

	free(rev_n1);
	free(rev_n2); */
	return (r);
}
