
#include <stdarg.h>
/**
 * sum_them_all - sum a variable amount of given values
 * @num: the identifier for the arguements
 * Return: the sum of all the variables
 */

int sum_them_all(const unsigned int num, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	va_start(args, num);

	for (i = 0; i < num; ++i)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}