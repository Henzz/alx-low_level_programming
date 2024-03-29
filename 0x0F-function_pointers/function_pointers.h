#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * File: function_pointers.h
 * Desc: Header file containing prototypes for pointer
 *       functions.
 */

#include <stdlib.h>
#include <stdio.h>

int _putchar(char a);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
