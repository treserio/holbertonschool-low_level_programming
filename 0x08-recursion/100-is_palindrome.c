#include "holberton.h"
#include <string.h>
#include <stdio.h>
int is_pal_hlpr(char *, char *);
/**
 * is_palindrome - tells if a string is a palindrome
 * @str: the number to test
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *str)
{
	if (strlen(str) == 0)
		return (1);
	return (is_pal_hlpr(str, str + strlen(str) - 1));
}
/**
 * is_pal_hlpr - tells if a string is a palindrome
 * @str: pointer to the start of the string, walks forward
 * @end: pointer to the end of the string, walks back
 * Return: 1 if string is palindrome, 0 if not
 */
int is_pal_hlpr(char *str, char *end)
{
	int check = 0;

	if (*str)
		check =	is_pal_hlpr(str + 1, end - 1);
	
	if (check == 0)
		return (0);
	else if (*str == *end)
		return (1);
	else
		return (0);
}
