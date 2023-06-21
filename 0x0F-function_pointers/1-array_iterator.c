#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-  a function that executes a function given as a parameter.
 * @size: is the size of the array
 * @action: s a pointer to the function you need to use.
 * @array : the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (action == NULL || array == NULL)
		return;

	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}
