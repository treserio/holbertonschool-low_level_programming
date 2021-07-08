#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
/**
 * main - keygenerator for 101-crackme
 *
 * return: a keyvalue string
 */

int main(void)
{
	/* 62 + 8 = 70 */
	char ch_list[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!/";
    int target = 0, i;
    char *rtrn_str = NULL;

    /* seed for rand */
    srand(time(0));

    while (target != 2772)
    {
        target = 0;
        rtrn_str = malloc(sizeof(char));

        for (i=0; target < 2772; i++)
        {
            int chr = rand() % strlen(ch_list);
            rtrn_str[i] = ch_list[chr];
            target += ch_list[chr];
            rtrn_str = realloc(rtrn_str, (i+2) * sizeof(char));
			printf("%c -> %s - i=%d - target=%d\n", ch_list[chr], rtrn_str, i, target );
        }
        free(rtrn_str);
    }
		printf("%s", rtrn_str);

    return(0);
}
