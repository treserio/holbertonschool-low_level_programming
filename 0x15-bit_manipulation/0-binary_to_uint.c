#include "holberton.h"
/**
 * binary_to_uint - convert binary string to unsigned int
 * @binary: string of binary chars to convert to an unsigned int
 * Return: number of items in list
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int rtrn = 0;
	int pwr = 1, len;

	if (!binary)
		return (rtrn);

	/* find end of string for 2^0 place */
	for (len = 0; binary[len]; ++len)
	{
		if (binary[len] != '0' && binary[len] != '1')
			return (rtrn);
	}
	/* from EOS to begining increase power of digit */
	for (--len; len >= 0; --len, pwr *= 2)
	{
		if (binary[len] == '1')
			rtrn += pwr;
	}

	return (rtrn);
}
