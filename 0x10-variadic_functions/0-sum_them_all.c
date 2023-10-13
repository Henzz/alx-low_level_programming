#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters passed
 * @n: number of args
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);
	return (sum);
}
