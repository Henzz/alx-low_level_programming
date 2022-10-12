#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * File: function_pointers.h
 * Desc: Header file containing prototypes for pointer
 *       functions.
 */

#include <stdlib.h>

int _putchar(char a);
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
