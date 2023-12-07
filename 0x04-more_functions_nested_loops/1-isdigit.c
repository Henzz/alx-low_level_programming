#include <ctype.h>

/**
 * _isdigit - checks if given value is integer or not
 * @c: integer
 *
 * Return: 0 and 1.
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
