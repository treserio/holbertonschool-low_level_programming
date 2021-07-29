#ifndef _variablah
#define _variablah

#include <stdio.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void p_c(char *ch);
void p_d(int *num);
void p_f(double *db);
void p_s(char *s);

#endif
