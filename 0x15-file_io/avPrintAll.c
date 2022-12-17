#include <stdio.h>

#define ALL_UNUSED(...) ALL_UNUSED_IMPL( VA_NUM_ARGS(__VA_ARGS__))(__VA_ARGS__ )

/**
 * main - Prints all arguments that are passed
 * @ac: Number of arguments passed
 * @av: Arguments passed
 * Return: Always 0(success).
 */
int main(int ac, char **av)
{
	int i;

	ALL_UNUSED(ac);
	i = 0;
	while (av[i] != null)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
