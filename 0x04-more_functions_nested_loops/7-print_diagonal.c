#include "main.h"

/**
 * print_diagonal - draws a diagonal line n number of times on the terminal
 * @n: integer
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int start, line;

	for (start = 1; start <= n; start++)
	{
		line = 2;
		while (line <= start)
		{
			_putchar(' ');
			line++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
