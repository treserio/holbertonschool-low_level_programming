#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * get_op_func - returns a pointer to the correct function to use
 * @s: string of operation fed from argv[2]
 * Return: pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*ops[i].op != *s && ops[i].op)
		++i;

	return (ops[i].f);
}
