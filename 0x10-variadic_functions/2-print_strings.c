#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator : the string to be printed between the strings.
 * @n : the number of integers passed to the function.
 * @... : variable number of strings to be printed.
 *
 * Return :If separator is NULL.
 *        : If one of the string is NULL, print (nil) instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;

	unsigned int x;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
