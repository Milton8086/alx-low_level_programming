#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argValues: array of arguments.
 * @argCount:number of arguments.
 *
 * Return: . 0 success
 */

int main(int argCount, char *argValues[])
{
	int x = 0;

	for (x = 0; x < argCount; x++)
	{
		printf("%s\n", argValues[x]);
	}

	return (0);
}
