#include "holberton.h"
int is_prime_hlpr(int, int);
/**
 * is_prime_number - tells if a number is prime or not
 * @num: the number to test
 * Return: 1 if num is prime else 0
 */
int is_prime_number(int num)
{
	if (num % 2)
		return (0);
	else
		return (is_prime_hlpr(num, 3));
}
/**
 * is_prime_hlpr - recursively tells if a num is prime
 * @num: the number to test
 * @fact: next factor to check
 * Return: 1 if num is prime else 0
 */
int is_prime_hlpr(int num, int fact)
{
	if (num % fact == 0)
		return (0);
	else if (fact > num)
		return (1);
	else
		return (is_prime_hlpr(num, fact + 2));
}
