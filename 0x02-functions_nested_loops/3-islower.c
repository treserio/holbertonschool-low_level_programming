/**
 * _islower - tells if a char is lowercase a-z
 * @input : an int passed to the function
 * Return: 1 if c is lowercase else 0
 */

int _islower(int input)
{
	int check = int()input;

	if (check > 97 && check < 123)
	{
		return (1);
	}
	return (0);
}
