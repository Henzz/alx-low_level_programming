/* #!/bin/bash */
#include <stdio.h>

int _putchar(char a);
/**
 * print_alphabet - prints lowercase alphabet letters
 *
 * Return: Always 0 (Success).
 */
int print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	};
	_putchar('\n');
	return (0);
}
