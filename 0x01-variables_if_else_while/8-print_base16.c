/*#!/bin/bash*/
#include <stdio.h>

/**
 * main - Print numbers of base 16 in lowercase(0-9a-f)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
