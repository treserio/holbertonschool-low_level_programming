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
	op_t ops[] = {
		{"c", p_c},
		{"i", p_d},
		{"f", p_f},
		{"s", p_s},
		{NULL, NULL}
	};

	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (ops[j].op != NULL)
		{
			if (*(ops[j].op) == format[i])
			{
				printf("%s", sep);
				ops[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		++i;
	}
	va_end(args);

	printf("\n");
}
/**
 * p_c - print char
 * @args: va_list with the correct variable setup
 * Return: void
 */
void p_c(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * p_d - print int
 * @args: va_list with the correct variable setup
 * Return: void
 */
void p_d(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * p_f - print float
 * @args: va_list with the correct variable setup
 * Return: void
 */
void p_f(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * p_s - print string
 * @args: va_list with the correct variable setup
 * Return: void
 */
void p_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}
