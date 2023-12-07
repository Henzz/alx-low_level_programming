#include "main.h"

/**
 * print_triangle - prints a triangle n number of times
 * @size: integer
 * Return: nothing.
 */

void print_triangle(int size)
{
	int start, space, hash, space_size;

	space_size = size;
	for (start = 1; start <= size; start++)
	{
		hash = 1;
		space = 1;
		if (size > 1)
		{
			while (space <= space_size - 1)
			{
				_putchar(' ');
				space++;
			}
		}
		while (hash <= start)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		space_size--;
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
