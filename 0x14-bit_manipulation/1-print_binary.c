#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be converted to it's binary representation.
 */
void print_binary(unsigned long int n)
{
	int binary[32], index = 0, i;

	if (n == 0)
		_putchar(0 + '0');

	while (n > 0)
	{
		i = n % 2;
		binary[index] = n % 2;
		n /= 2;
		index++;
	}

	i = index - 1;
	while (i >= 0)
	{
		_putchar(binary[i] + '0');
		i--;
	}
}
