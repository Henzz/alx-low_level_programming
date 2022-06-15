/*#!/bin/bash*/
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * Return: nothing
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
/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}
