#include "variadic_functions.h"
/**
 * print_numbers - print the numbers passed to func with separator
 * @n: the numbers to print
 * @separator: the string to put between numbers
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int (*func)(void*);
	char *arg;
	char ch2str[2];

	va_list args;
	va_start(args, format);

	/* pull out the first one as string and iterate through to check values */
	arg = va_arg(args, char*);

	while (arg[i])
	{
		/* convert char to str */
		ch2str[0] = arg[i];
		ch2str[1] = '\0';

		func = get_op_func(ch2str);
		
		/* check if func != NULL */
		if (func != NULL)
		{
			/* switch case to test what va_arg type to pass function */
			switch (ch2str[0])
			{
				case 'c':
					func(va_arg(args, char));
					break;
				case 'i':
					func(va_arg(args, int));			
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
/**
 * get_op_func - returns a pointer to the correct function to use
 * @s: string of operation fed from argv[2]
 * Return: pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
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
void p_c(char *ch)
{
	printf("%c", *ch);
}
/**
 * op_sub - subtract two numbers and return result
 * @a: number to be subtracted from
 * @b: number to subtract
 * Return: result of a - b
 */
void p_d(int *num)
{
	printf("%d", *num);
}
/**
 * op_mul - multiply two numbers and return result
 * @a: number to be multiplied
 * @b: number to be multiplied
 * Return: result of a * b
 */
void p_f(double *db)
{
	printf("%f", *db);
}
/**
 * op_div - divide two numbers and return result
 * @a: number to be divided
 * @b: divisor
 * Return: result of a / b
 */
void p_s(char *s)
{
	if (s)
		printf("%s", s);
	else
		printf("(nil)");
}
