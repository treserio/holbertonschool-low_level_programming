#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_iterator - performs action on values in array to size
 * @array: array of values to enact action on
 * @size: size of the array
 * @action: function to perform on array values
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *oper = "+-*/%";
	int (*func)(int, int);

	/* check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check for correct operator */
	if (strstr(oper, argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/* convert values */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	/* grab correct functions & print result */
	func = get_op_func(argv[2]);
	printf("%d", func(a, b));
	return (0);
}
