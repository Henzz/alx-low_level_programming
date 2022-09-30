#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(x) { UNUSED_ ## x __attribute__((unused)) }
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x
#endif

#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: strings of the arguments
 *
 * Return: Always 0(Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
	}
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
