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
 * main - prints the function name
 * @argc: number of arguments
 * @argv: strings of the arguments
 *
 * Return: Always 0(Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
