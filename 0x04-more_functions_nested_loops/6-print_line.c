#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * Return: Nothing.
 */

void print_line(int n)
{
	int start;

	for (start = 1; start <= n; start++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
