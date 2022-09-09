/*#!/bin/bash*/
#include <stdio.h>

/**
 * main - Print alphabet in lowercase except for q and e
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
