#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: the integer number to get the last digit from.
 *
 * Return: the value of the las digit as an integer.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
