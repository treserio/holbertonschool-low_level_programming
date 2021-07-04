#include "holberton.h"
/**
 * _atoi - convert a string to an int
 * @n_str: pointer to an int value to be reset
 * Return: void
 */
int _atoi(char *n_str)
{
	int neg = 1;
	unsigned int rtrn = 0;

	while (*n_str)
	{
		if (*n_str == '-')
			neg *= -1;

		else if (*n_str >= '0' && *n_str <= '9')
		{
			/* adjust the 10s place, at 0 does nothing */
			rtrn *= 10;
			rtrn += (*n_str - '0');
		}
		else if (rtrn > 0)
			break;

		++n_str;
	}

	return (rtrn * neg);
}
