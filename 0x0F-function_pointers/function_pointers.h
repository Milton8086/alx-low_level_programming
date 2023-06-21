#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTER_H


#include <stdlib.h>
#include <stddef.h>


int (*get_op_func(char *s))(int, int);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);


#endif
