#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);
void print_name(char *name, void (*f)(char *));


/**
 * op_add: returns the sum of a and b
 * @a :the first number.
 * @b :the second number
 *
 * Return:sum of a and b.
 */

int op_add(int a, int b)
{
	int sum = (a + b);

	return (sum);
}

/**
 * op_sub: returns the difference of a and b
 *
 * @a: first number 
 * @b: second number
 *
 * Return: the difference.
 */

int op_sub(int a, int b)
{
	int diff = (a - b);

	return (diff);
}


/**
 * op_mul- returns the product of a and b.
 * @a : the first number 
 * @b :the second number
 *
 * Result:the product of multiplying a and b.
 */

int op_mul(int a, int b)
{
	int result =( a * b);

	return (result);
}

/**
 * op_div: returns the result of the division of a by b
 * @a : the first number 
 * @b : the second number.
 *
 * Result: result of diving a and b.
 */

int op_div(int a, int b)
{
	int result = (a/b);

	return (result);
}

/**
 * op_mod: returns the remainder of the division of a by b.
 * @a: the first number.
 * @b: the second number.
 *
 * Result: the remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	int result = (a % b);

	return (result);
}
