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
    char holder[87], current_char, invalid[] = "'!()\"><";
    char *set = holder;
    int target = 2772, i;


    /* set the seed for rand */
    srand(time(0));

    while (target > 0)
    {
        current_char = rand() % 94 + 32;
        
        i=0;

        while (invalid[i])
        {
            if (current_char == invalid[i])
            {
                current_char++;
                i=0;
            }
            i++;
        }
        if (target - current_char > 126)
        {
            *set = current_char;
            set++;
            target -= current_char;
        }
        else
        {
          if (target - current_char > 32)
          {
            *set = current_char;
            set++;
            target -= current_char;            
            *set = target;
            target -= target;
            set++;
          }
          else
          {
            *set = 32;
            target -= 32;
            *set = target;
            target -= target;
            set++;
          }
        }
    }
    *set = '\0';
    printf("%s", holder);
    return (0);
}