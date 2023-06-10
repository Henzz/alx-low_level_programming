#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercaser.
 * On error, 0.
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
