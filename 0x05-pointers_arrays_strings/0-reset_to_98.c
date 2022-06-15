/*/bin/bash*/
#include <stdio.h>

/**
 * reset_to_98 - change pointer value
 *
 * @n: pointer parameter
 *
 * Return: Always 0.
 */
int reset_to_98(int *n)
{
	*n = 98;
	return (0);
}

/**
 * main - check this code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
