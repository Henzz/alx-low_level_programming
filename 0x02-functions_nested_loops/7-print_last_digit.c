#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - gets last digit of a number
 * @c: parameter to check
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int c)
{
	_putchar('0' + abs(c % 10));
	return (abs(c % 10));
}
