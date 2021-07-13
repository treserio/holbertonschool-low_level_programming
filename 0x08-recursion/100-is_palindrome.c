#include "holberton.h"
int is_pal_hlpr(char *, int);
/**
 * is_palindrome - tells if a string is a palindrome
 * @str: the number to test
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *str)
{
	if (strlen(str) == 0)
		return (1);

	return (is_pal_hlpr(str, 0));
}
/**
 * is_palindrome - tells if a string is a palindrome
 * @str: the number to test
 * @len: the length of the string
 * Return: 1 if string is palindrome, 0 if not
 */
is_pal_hlpr(char *str, int len)
{
	if (*str)
	{
		is_pal_hlpr(++str, ++len);
		--str;
		--len;
	}
	if (str == str - len)
		return (1);
	else
		return (0);
}
