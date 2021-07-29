#include "variadic_functions.h"
#include <string.h>
/**
 * print_numbers - print the numbers passed to func with separator
 * @n: the numbers to print
 * @separator: the string to put between numbers
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	void (*func)(void*);
	char *arg;
	char ch2str[2];

	if (format)
	{
		va_list args;
		va_start(args, format);

		while (format[i])
		{
			func = get_op_func(format[i]);

			/* check if func != NULL */
			if (func != NULL)
			{
				/* switch case to test what va_arg type to pass function */
				switch (format[i])
				{
					case 'c':
						func(va_arg(args, char *));
						break;
					case 'i':
						func(va_arg(args, int *));
						break;
					case 'f':
						func(va_arg(args, double *));
						break;
					case 's':
						func(va_arg(args, char *));
						break;
				}
			}
			++i;
		}
		va_end(args);
	}
	print("\n");
}
/**
 * get_op_func - returns a pointer to the correct function to use
 * @s: string of operation fed from argv[2]
 * Return: pointer to the correct function
 */
void (*get_op_func(char *s))(void *)
{
	op_t ops[] = {
		{"c", p_c},
		{"i", p_d},
		{"f", p_f},
		{"s", p_s},
		{NULL, NULL}
	};
	int i = 0;

	/* is && considered 2 while loops?!? Why? */
	while (ops[i].op != NULL && strcmp(ops[i].op, s))
		++i;

	return (ops[i].f);
}
/**
 * op_add - add two numbers and return result
 * @a: number to be added
 * @b: number to be added
 * Return: result of a + b
 */
void p_c(void *c)
{
	char *ch = c;
	printf("%c", *ch);
}
/**
 * op_sub - subtract two numbers and return result
 * @a: number to be subtracted from
 * @b: number to subtract
 * Return: result of a - b
 */
void p_d(void *n)
{
	int *num = n;
	printf("%d", *num);
}
/**
 * op_mul - multiply two numbers and return result
 * @a: number to be multiplied
 * @b: number to be multiplied
 * Return: result of a * b
 */
void p_f(void *dub)
{
	double *db = dub;
	printf("%f", *db);
}
/**
 * op_div - divide two numbers and return result
 * @a: number to be divided
 * @b: divisor
 * Return: result of a / b
 */
void p_s(void *str)
{
	char *s = str;
	if (s)
		printf("%s", s);
	else
		printf("(nil)");
}
