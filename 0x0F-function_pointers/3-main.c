#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * main-print the result of operations.
 * @argv: arrays of pointers to the arguments.
 * @argc: number of arguments.
 *
 * Return :0 success
 */

int main(int argc, char *argv[])
{
	int x, y;
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("error\n");
		return (98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);


	op_func = *get_op_func(argv[2]);


	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = op_func(x, y);

	printf("%d\n", result);
	return (0);
}
