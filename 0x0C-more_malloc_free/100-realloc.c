#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block.
 * @ptr: a pointer to the memory.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: a pointer to the new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr;
	char *new_ptr_char;
	unsigned int i;
	unsigned int min_size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;
	new_ptr_char = new_ptr;

	min_size = new_size;

	if (new_size < old_size)
		min_size = new_size;

	for (i = 0; i < min_size; i++)
		new_ptr_char[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}

