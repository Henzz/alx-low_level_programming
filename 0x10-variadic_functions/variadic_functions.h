#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

/**
 * struct printer - symbol and function pointer
 * @symbol: first argument for data type to use
 * @print: second argumnet for a function
 *
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
