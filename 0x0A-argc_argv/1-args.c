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
#include <string.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: strings of the arguments
 *
 * Return: Always 0(Success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
