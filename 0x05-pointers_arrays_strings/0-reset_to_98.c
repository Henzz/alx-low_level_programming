/*/bin/bash*/
#include <stdio.h>

/**
 * reset_to_98 - change pointer value
 *
 * @n: pointer parameter
 *
 * Return: Nothing.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	putchar('n');
	putchar('=');
	putchar(n/10 + '0');
	putchar('\n');
	reset_to_98(&n);
	putchar('n');
	putchar('=');
	putchar(n%10 + '0');
	putchar('\n');
	return (0);
}
