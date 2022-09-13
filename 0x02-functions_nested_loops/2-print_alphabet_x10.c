/* #!/bin/bash */
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet letters times ten
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int start;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (start = 'a'; start <= 'z'; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
}
