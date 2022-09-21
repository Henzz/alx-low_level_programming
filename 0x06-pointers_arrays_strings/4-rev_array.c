#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: size of array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, end;

	i = 0;
	while (i < (n / 2))
	{
		end = a[i];
		*(a + i) = a[n - i - 1];
		*(a + (n - i - 1)) = end;
		i++;
	}
}
