/* #!/bin/bash */
#include <stdio.h>

/* Function declaration */
void print_alphabet();

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Print alphabet
 *
 * Return: nothing.
 */
void print_alphabet()
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	};
	putchar('\n');
}
