/**
 * factorial - calculates the factorial of given number
 * @n:the number to be factorized
 *
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
