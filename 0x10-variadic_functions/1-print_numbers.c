#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all-Returns a function that returns the sum of all its parameters.
 * n:the number to be entered.
 * @...: the variable.
 *
 * Return:If n == 0, return 0.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list_ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
