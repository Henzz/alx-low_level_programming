#include "main.h"

/**
 * is_prime_number - checks if given number is prime
 * @n: given integer
 *
 * Return: 1 if it is prime number else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		return (0);
	}
	if (n % 2 != 0)
	{
		return (1);
	}
	return (is_prime_number(n / 2));
}
