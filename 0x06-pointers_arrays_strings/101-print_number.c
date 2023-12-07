#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 *
 * Return: nothing.
 */
void print_number(int n)
{
	int y, z, counter = 0;

	y = n;
	while (y != 0)
	{
		y = y / 10;
		counter++;
	}
	if (n < 0)
	{
		_putchar(45);
	}
	if (counter == 0 || counter == 1)
	{
		_putchar(abs(n % 10) + '0');
	}
	if (counter == 2)
	{
		_putchar(abs(n / 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
	if (counter == 3)
	{
		y = abs(n / 10);
		_putchar(abs(y / 10) + '0');
		_putchar(abs(y % 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
	if (counter == 4)
	{
		y = abs(n / 10);
		z = abs(y / 10);
		_putchar(abs(z / 10) + '0');
		_putchar(abs(z % 10) + '0');
		_putchar(abs(y % 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
}
