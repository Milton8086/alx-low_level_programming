#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argCount :number of arguments.
 * @argValues:array of arguments.
 *
 * Return:0 success.
 */

int main(int argCount, char *argValues[])
{
	int num1 = 0, num2 = 0;
	int result;

	if (argCount == 3)
	{
		num1 = atoi(argValues[1]);
		num2 = atoi(argValues[2]);
	       	result = num1 * num2;

		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
