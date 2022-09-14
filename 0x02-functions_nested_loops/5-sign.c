#include <ctype.h>
#include "main.h"

/**
 * print_sign - checks for a number greater than zero then returns 1 prints +
 * else if equal to zero then returns 0 and prints 0
 * else if less than zero then returns -1 and prints -
 * @n: The character to check
 *
 * Return: 1 if c is lowercaser.
 * On error, 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
