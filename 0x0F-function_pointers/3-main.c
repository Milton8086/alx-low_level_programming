#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
#include <unistd.h>

/**
 * main-print the result of operations.
 * @argv: arrays of pointers to the arguments.
 * @argc: number of arguments.
 *
 * Return :0 success
 */

int main(int __attribute__((__unused__))argc, char *argv[])
{
	int x, y;
	char *op;

	if (argc != 4)
	{
		printf("error\n");
		return (98);
	}

	x = atoi(argv[1]);
	op = argv[2];
	y = atoi(argv[3]);

	if ((get_op_func(op) == NULL || op[1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '\\' && y == 0) || (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n",get_op_func(op)(x, y));
	return (0);
	}
}
