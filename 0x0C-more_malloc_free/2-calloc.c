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
	int i, elements = nmemb, typesize = size;
	char *space;

	if (elements == 0 || typesize == 0)
		return (NULL);
	space = malloc((elements + 1) * typesize);
	if (space == NULL)
		return (NULL);
	for (i = 0; i < elements; i++)
	{
		space[i] = '0';
	}
	return (space);
}
