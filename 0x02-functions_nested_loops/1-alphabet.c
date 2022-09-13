/* #!/bin/bash */
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet letters
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	};
	_putchar('\n');
}
