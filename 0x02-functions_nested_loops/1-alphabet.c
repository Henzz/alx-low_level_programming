/* #!/bin/bash */
#include <stdio.h>

void print_alphabet(void);
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
		putchar(a);
	};
	putchar('\n');
}
