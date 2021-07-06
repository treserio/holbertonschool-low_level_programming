#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - keygenerator for 101-crackme
 * 
 * return: a keyvalue string
 */

int main(void)
{
    char holder[87], current_char;
    char *set = holder;
    int target = 2772;

	/* set the seed for rand */
	srand(time(0));

    while (target > 0)
    {
        current_char = rand() % 74 + 48;
        /* 48-57, 65-90, 97-122 */
        if (current_char >= 48 && current_char <= 57)
        {
        }
        else if (current_char >= 65 && current_char <= 90)
        {
        }
        else if (current_char >= 97 && current_char <= 122)
        {
        }
        else
        {
            continue;
        }

        if (target - current_char > 32)
        {
            *set = current_char;
            set++;
            target -= current_char;
        }
        else
        {
			if (target > 127)
			{
				*set = 32;
				target -= 32;
				set++;
			}
			else
			{
            *set = target;
            set++;
            target -= target;
			}
        }
    }
    *set = '\0';
    printf("%s", holder);
    return (0);
}
