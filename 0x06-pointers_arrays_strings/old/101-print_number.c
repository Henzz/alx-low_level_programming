#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 *
 * Return: nothing.
 */
void print_number(int n)
{
	int y, z;

	if (n < 10 && n > -1)
	{
		_putchar(abs(n % 10) + '0');
	}
	else if (n < 0 && n > -10)
	{
		_putchar(45);
		_putchar(abs(n % 10) + '0');
	}
	else if (n < -9 && n > -100)
	{
		_putchar(45);
		_putchar(abs(n / 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
	else if (n > 9 && n < 100)
	{
		_putchar(abs(n / 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
	else if (n > 99 && n < 1000)
	{
		y = abs(n / 10);
		_putchar(abs(y / 10) + '0');
		_putchar(abs(y % 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
	else if (n > 999)
	{
		y = abs(n / 10);
		z = abs(y / 10);
		_putchar(abs(z / 10) + '0');
		_putchar(abs(z % 10) + '0');
		_putchar(abs(y % 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
}
