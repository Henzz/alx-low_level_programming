/*#!/bin/bash*/
#include <stdio.h>

/*Function declaration*/
void print_alphabet();

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
	return;
}

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
