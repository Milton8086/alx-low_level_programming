#include "main.h"

/**
 * puts2 - prints every othr character of a string, starting with the \
 * first charater, followed by a new line,
 * @str: sring to be printed
 *
 * Return: nothing on succes
 */

void puts2(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}

	for (i = 0; i < count; i++)
		str--;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
