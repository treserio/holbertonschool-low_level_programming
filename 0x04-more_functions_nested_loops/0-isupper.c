/**
 * _isupper - function to check case of a letter
 * input: char to be checked
 * Returns: 1 if input is uppercase, 0 if lower
 */
int _isupper(int input)
{
	if (input >= 65 && input <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
