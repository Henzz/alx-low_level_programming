#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int len, i, left, right;
	char temp;

	len = strlen(s);
	left = 0;
	right = len - 1;

	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
