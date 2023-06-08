#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion- the funtion that for calculating the sqaure root.
 * @n : the number to be used.
 *
 * Return: sqaure root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
