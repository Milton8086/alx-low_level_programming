#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max)
{
	int i;
	int* ptr;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1; 
	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		ptr[i] = min;

	return (ptr);
}
