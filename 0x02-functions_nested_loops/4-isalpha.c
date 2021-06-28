#include <stdlib.h>
/**
 * _islower - tells if a char is lower or upper a-z
 * @input : an int passed to the function
 * Return: 1 if c is lowercase else 0
 */

int _islower(char input)
{
	int check = (int)(input);

	if ((check > 97 && check < 123) || (check > 64 && check < 91))
	{
		return (1);
	}
	return (0);
}
