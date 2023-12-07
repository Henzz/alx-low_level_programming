#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the address of destination char
 * @src: the address of source char
 * @n: size of the memory to copy
 *
 * Return: copied char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
