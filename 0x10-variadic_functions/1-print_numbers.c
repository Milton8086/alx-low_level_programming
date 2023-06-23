#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @n: the number of integers passed to the function.
 * @separator: the string to be printed between numbers.
 * @... : a variable of numbers to be printed.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x;

	va_start(nums, n);

	for (x = 0; x < n; x++)
	{
		printf("%d\n", va_arg(nums, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(nums);
}
