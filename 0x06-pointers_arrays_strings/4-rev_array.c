#include "main.h"
#include <stdio.h>

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
	end = n - 1;
	n = n - 1;
	while (i <= n)
	{
		if (a[n] != a[end])
		{
			printf(", ");
		}
		printf("%d", a[n]);
		n--;
	}
	printf("\n");
}
