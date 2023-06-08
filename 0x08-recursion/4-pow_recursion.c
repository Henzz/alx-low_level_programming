/**
 * _pow_recursion - calculates the power of given number by given value
 * @x:the number to be raised
 * @y:the power
 *
 * Return: the power of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
