#include "main.h"

/**
 * _strlen_recursion- a function that returns the length of a string
 * @s:character to be counted
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	/*check for the null character*/

	if (*s != '\0')
	{
		return (0);
	}
	/*if not a character return 1 and call function again*/
	else
	{
		s++;
		return (_strlen_recursion(s + 1));
	}
}
