#include <ctype.h>

/**
 * _isupper - checks if it's upper case or lowercase
 * @c: The character to check
 *
 * Return: 0 and 1.
 */

int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
