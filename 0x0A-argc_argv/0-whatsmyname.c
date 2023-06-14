#include <stdio.h>
#include "main.h"

/**
 * main: a program that prints its name, followed by a new line.
 * @argCount : number of arguments
 * @argValues: array of arguments
 *
 * Return : 0 success
 */


int main(int argCount __attribute__((unused)), char *argValues[])
{
	printf("%s\n", *argValues);

	return(0);
}
