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
	/* 69 */
	char ch_list[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
    int target = 0, i;
    char *rtrn_str = NULL;

    /* seed for rand */
    srand(time(0));

	printf("%d", strlen(ch_list));

    while (target != 2772)
    {
        target = 0;
        rtrn_str = malloc(sizeof(char));
/*
        for (i=0; target < 2772; i++)
        {
            int chr = rand() % strlen(ch_list)-1;
            rtrn_str[i] = ch_list[chr];
            target += ch_list[chr];
            rtrn_str = realloc(rtrn_str, (i+2) * sizeof(char));
			printf("%c\n", ch_list[chr]);
			printf("%s\n", rtrn_str);
        }
*/
        free(rtrn_str);
    }
		printf("%s", rtrn_str);

    return(0);
}
