#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)

{
	char holder[89], current_char;
	char *set = holder;
	int target = 2772, char_val;

	holder[0] = '2';
	holder[1] = ' ';
	set += 2;

	while(target>0)
	{
		char_val = rand() % 90 + 32;

		/* remove special bash chars */
		if (char_val == 92 || char_val == 59 || char_val == 33)
			continue;

		if (target % char_val > 0)
		{
			current_char = char_val;
			*set = current_char;
        set++;
        target -= char_val;
		}
		else
		{
			*set = target;
			set++;
			target -= target;
		}
	}
	*set = '\0';
	printf("%s", holder);
	return (0);
}
