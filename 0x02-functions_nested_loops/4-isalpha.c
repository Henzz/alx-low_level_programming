#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for a letter, lowercase or uppercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercaser.
 * On error, 0.
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	return (0);
}
