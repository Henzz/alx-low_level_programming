/*#!/bin/bash*/
#include <stdio.h>
#include <string.h>

/**
 * main - Prints all possible combinations of single-digit numbers(0, 1, ...)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
