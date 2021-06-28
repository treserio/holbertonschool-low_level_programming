/**
 * print_sign - tells if an int is positive, negative, or zero
 * @check: value to be checked
 * Return: + if greater than zero, zero if zero, - if less than zero
 */

int print_sign(int check)
{
	int out;

	if (check < 0)
	{
		out = 45;
		return (out);
	}
	else if (check == 0)
	{
		out = 48;
		return (out);
	}
	else
	{
		out = 43;
		return (out);
	}
}
