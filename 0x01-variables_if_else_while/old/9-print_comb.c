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

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
