#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns a function that returns the sum of parameters.
 * @n:the number to be entered.
 * @...: the variable.
 *
 * Return:Returns the sum  of all the parameters,if n is 0;returns 0.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
