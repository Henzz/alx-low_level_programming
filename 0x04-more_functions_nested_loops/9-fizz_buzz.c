#include <unistd.h>

/**
 * main - prints numbers from 1 to 100, followed by a new line
 * prints Fizz for multiples of three
 * prints Buzz for multiples of five
 * prints FizzBuzz for multiples of three and five
 * Return: always 0 (success).
 */

int main(void)
{
	int n;
	char x, y;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) == 0))
		{
			write(1, "FizzBuzz", 8);
		}
		else if ((n % 3) == 0)
		{
			write(1, "Fizz", 4);
		}
		else if ((n % 5) == 0)
		{
			write(1, "Buzz", 4);
		}
		else
		{
			if (n < 10)
			{
				x = ((n % 10) + '0');
				write(1, &x, 1);
			}
			else if (n > 10)
			{
				x = ((n % 10) + '0');
				y = ((n / 10) + '0');
				write(1, &y, 1);
				write(1, &x, 1);
			}
		}
		if (n < 100)
		{
			write(1, " ", 1);
		}
	}
	write(1, "\n", 2);
	return (0);
}
