#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup()-a function returns a pointer to a new string which is a duplicate.
 * @str: string fo characters
 *
 * Return: 0 on success.
 */

char *_strdup(char *str)
{
	int x = 0, y = 0;
	char *b;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	b = malloc(sizeof(char) * (x + 1));

	if (b == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		b[y] = str[x];

	return (b);
}
