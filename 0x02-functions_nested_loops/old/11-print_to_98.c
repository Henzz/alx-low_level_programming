#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - print all nartural numbers from n to 98
 * @n: int point of start
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int lessn, greatn, equaln;

	lessn = n;
	equaln = n;
	greatn = n;
	if (lessn < 98)
	{
		while (lessn <= 98)
		{
			if (lessn < 0)
			{
				_putchar('-');
				if (lessn < -9)
				{
					_putchar((1) + '0');
				}
			}
			if ((lessn / 10) > 0)
			{
				_putchar((abs(lessn) / 10) + '0');
			}
			_putchar((abs(lessn) % 10) + '0');
			if (lessn < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			lessn++;
		}
		_putchar('\n');
	}
	if (equaln == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	if (greatn > 98)
	{
		while (n >= 98)
		{
			if (n > 109)
			{
				_putchar((1) + '0');
				_putchar((1) + '0');
			} else if (n > 99)
			{
				_putchar((1) + '0');
				_putchar((0) + '0');
			} else if (n < 100)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
}
