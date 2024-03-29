#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the constant byte
 * @n: the size of the memory
 *
 * Return: a pointer to the memory area of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
