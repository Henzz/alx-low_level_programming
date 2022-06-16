/*#!/bin/bash*/
#include <stdio.h>

/*Function declaration*/
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main()
{
	print_alphabet();
	return (0);
}

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
