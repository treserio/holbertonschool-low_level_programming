#include "holberton.h"
/**
 * infinite_add - add char arrays of values together
 * @n1: first string array of numbers
 * @n2: second string array of numbers
 * @arr: the return buffer for the result
 * @size_r: the size of the output buffer
 * Return: the sum of n1 + n2
 */
char *infinite_add(char *n1, char *n2, char *arr, int size_r)
{
	int sz1 = 0, sz2 = 0, i = 0, carry_over = 0;
	/* find input sizes */
	while (n1[sz1])
        ++sz1;		
	while (n2[sz2])
        ++sz2;
	/* reverse iterate back over them and add to buffer */
	for (i = 0, --sz1, --sz2; (sz1 >= 0 || sz2 >= 0) ; ++i, --sz1, --sz2)
	{
		/* if both n1 and n2 are still strings */
		if (sz1 >= 0 && sz2 >= 0)
		{
			arr[i] = (((n1[sz1] - '0') + (n2[sz2] - '0') + carry_over) % 10) + '0';
			carry_over = ((n1[sz1] - '0') + (n2[sz2] - '0') + carry_over) / 10;
		}
		/* if n1 is still a string but n2 is not */
		else if (sz1 >= 0)
		{
			arr[i] = (((n1[sz1] - '0') + carry_over) % 10) + '0';
			carry_over = ((n1[sz1] - '0') + carry_over) / 10;
		}
		/* if n2 is still a string but n1 is not */
		else if (sz2 >= 0)
		{
			arr[i] = (((n2[sz2] - '0') + carry_over) % 10) + '0';
			carry_over = ((n2[sz2] - '0') + carry_over) / 10;
		}
	}
	/* check for carry over */
	if (carry_over == 1)
		arr[i++] = carry_over + '0';
	/* check if value is > size_r, still needs null term char */
	if (i > size_r - 1)
		return (0);
	/* reverse the string */
	/* reuse carry_over for 1/2 way through i, and sz1 for temp val */
	carry_over = --i;
	for (; i > carry_over / 2; --i)
	{
		sz1 = arr[i];
		arr[i] = arr[carry_over - i];
		arr[carry_over - i] = sz1;
	}
	/* end buffer with null char */
	arr[carry_over+1] = '\0';
	return (arr);
}