#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name-a function that prints a name.
 * @f: apointer to a function.
 * @name: string to add.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
