#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory of unsigned int type
 *
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *space;

	space = malloc(b);
	if (space == NULL)
	{
		exit(98);
	}
	return (space);
}
