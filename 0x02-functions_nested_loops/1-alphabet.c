/* #!/bin/bash */
#include <stdio.h>

int _putchar(char a);
/** 
 * print_alphabet - Print alphabet
 *
 * Return: nothing.
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
