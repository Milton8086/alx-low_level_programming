#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array- a function that creates an array of chars.
 * @c: char to put in the array.
 * @size: size of array.
 *
 * Return: null if fail,filled array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
	return (s);
}
