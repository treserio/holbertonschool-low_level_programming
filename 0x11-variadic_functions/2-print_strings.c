#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print n amount of strings passed to func
 * @n: the number of char * passed to func
 * @separator: the string to put between numbers
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		if (va_arg(args, char*))
			printf("%d", va_arg(args, char*));
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
