/**
 * sqrtSearch - calculates the square root of the number N
 * using BS
 * @low:the lowest point range of the number N
 * @high:the highest point range of the number N
 * @N:the number to be calcualted
 *
 * Return: the square root of N.
 */
int sqrtSearch(int low, int high, int N)
{
	/* If the range is still valid */
	if (low <= high)
	{
		/* Find the mid-value of the range */
		float mid = (low + high) / 2;

		/* Base Case */
		if ((mid * mid <= N)
				&& ((mid + 1) * (mid + 1) > N))
			return (mid);

		/*
		 * Condition to check if the
		 * left search space is useless
		 */
		else if (mid * mid < N)
			return (sqrtSearch(mid + 1, high, N));
		else
			return (sqrtSearch(low, mid - 1, N));
	}
	else if (N < 0)
		return (-1);

	return (low);
}

/**
 * _sqrt_recursion - calculates the natural square root of a given number
 * @n:the number to be square rooted
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	return (sqrtSearch(0, n, n));
}
