#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argCount: number of arguments
 * @argValues: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argCount, char *argValues[])
{
(void) argValues; /*Ignore argValues*/
	printf("%d\n", argCount - 1);

	return (0);
}
