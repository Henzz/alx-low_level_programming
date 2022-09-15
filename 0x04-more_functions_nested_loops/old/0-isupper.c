/*#!/bin/bash*/
#include <stdio.h>
#include <unistd.h>

/**
 * _isupper - checks if it's upper case or lowercase
 * @c: The character to check
 *
 * Return: 0 and 1.
 */

int _isupper(char c)
{
	/* c - varibale */
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
