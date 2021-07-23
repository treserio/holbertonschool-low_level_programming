#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc memory and confirm success
 * @num: amount of memory to allocate
 * Return: pointer to memory, or exit code 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int num)
{
	int i, j;
	char *concat;
	
	/* convert NULLs to "" */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	concat = malloc(iof(s1) + num);
	if (concat == NULL)
		return (NULL);

	for(i = 0; s1[i]; ++i)
		concat[i] = s1[i];

	for (j = 0; s2[j] && j < num; ++j, ++i)
		concat[i] = s2[j];

	concat[i] = '\0';
	return (concat);
}
