#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first integer address
 * @b: second integer address
 *
 * Return: noting.
 */
void swap_int(int *a, int *b)
{
	int n, m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
