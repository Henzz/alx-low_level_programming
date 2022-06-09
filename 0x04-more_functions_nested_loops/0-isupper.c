/*#!/bin/bash*/
#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if it's upper case or lowercase
 *
 * @c: The character to check
 *
 * Return: 0 and 1.
 */
int _isupper(int c)
{
	/* c - varibale */
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
