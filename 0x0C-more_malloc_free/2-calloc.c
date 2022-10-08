#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, elements = nmemb;
	char *space;

	if (elements == 0 || size == 0)
		return (NULL);
	space = malloc((elements) * size);
	if (space == NULL)
		return (NULL);
	for (i = 0; i < elements + 1; i++)
	{
		space[i] = 0;
	}
	return (space);
}
