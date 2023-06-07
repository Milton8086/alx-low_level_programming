#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion :a function that prints a string, followed by a new line.
 * @s:the character to be printed
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	putchar('\n');
}
