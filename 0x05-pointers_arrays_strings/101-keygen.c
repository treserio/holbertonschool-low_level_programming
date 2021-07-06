#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)

{  
  char holder[89];
  char *start = holder, *set = holder;
  char current_char;
  
  int target = 2772, char_val;

  holder[0] = '2';
  holder[1] = ' ';
  set += 2;
  
  while(target>0)
  {
    char_val = rand() % 95 + 32;
    
	if (char_val == 92)
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