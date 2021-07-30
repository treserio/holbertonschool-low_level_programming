#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - print variable types of values passed in, determined by format
 * @format: a string of operators telling print_all how to print the va_list
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		/* switch case to test what va_arg type to pass function */
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		++i;
		printf(", ");
	}
	va_end(args);

	printf("\n");
}
