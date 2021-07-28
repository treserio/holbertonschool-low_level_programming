#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - performs various calculations based on argv[2]
 * @argc: number of arguments fed to function
 * @argv: string version of arguments
 * Return: 0, exit 98 if wrong argc, 99 if wrong argv[2], 100 if div by 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	/* check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert values */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	/* grab correct functions & print result */
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(a, b));
	return (0);
}
