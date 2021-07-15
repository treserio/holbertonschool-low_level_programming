/**
 * _isdigit - check if a digit is [0-9]
 * @input: value to check, expects char as input value
 * Return: 1 if 0 < input < 9, else 0
 */
int _isdigit(int input)
{
	if (input >= 48 && input <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
