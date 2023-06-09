/**
 * is_prime_number - checks if give number is prime number or not
 * @n:given number
 *
 * Return: 1 for prime number
 * or 0 for non prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	if (n == 2 || n % 2 != 0)
		return (1);
	return (is_prime_number(n / 2));
}
