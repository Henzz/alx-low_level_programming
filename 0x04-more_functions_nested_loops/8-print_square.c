#include "main.h"

/**
 * print_square - prints a square on the terminal
 * @size: integer
 * Return: nothing.
 */

void print_square(int size)
{
	int start, square;

	for (start = 0; start < size; start++)
	{
		square = 0;
		while (square < size)
		{
			_putchar('#');
			square++;
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
