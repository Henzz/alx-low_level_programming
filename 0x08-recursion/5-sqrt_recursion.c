#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: given number
 *
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if ((n - n/2) < .001 || (n/2 - n) < .001)
	{
		return (-1);
	}
	if (n/2 * n/2 > n)
	{
		_sqrt_recursion(n/2);
	}
	if (n/2 * n/2 < n)
	{
		_sqrt_recursion(n - n/2);
	}
	return (n);
}
