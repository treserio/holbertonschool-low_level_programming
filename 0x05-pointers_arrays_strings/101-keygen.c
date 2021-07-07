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
    int target = 2772, sub;

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

		sub = target - current_char;

        if (sub > 64)
        {
            *set = current_char;
            set++;
            target -= current_char;
        }
        else if (sub >= 48 && sub <= 57)
        {
			*set = current_char;
			set++;
			*set = target - current_char;
        }
        else if (sub >= 65 && sub <= 90)
        {
			*set = current_char;
			set++;
			*set = target - current_char;
        }
        else if (sub >= 97 && sub <= 122)
        {
			*set = current_char;
			set++;
			*set = target - current_char;			
        }
        else
        {
            continue;
        }
    }
    *set = '\0';
    printf("%s", holder);
    return (0);
}
