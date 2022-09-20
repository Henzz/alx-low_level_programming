#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: string to be reversed
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int len, i, end;
	char temp[1000];

	len = strlen(s);
	end = len - 1;

	for (i = 0; i < len; i++)
	{
		temp[i] = s[end];
		end--;
	}

	temp[i] = '\0';
	puts(temp);
}
