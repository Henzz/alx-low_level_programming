#include <string.h>

/**
 * *_strncat - concatenates two strings from given n bytes
 * @dest: value of first string
 * @src: value of second string
 * @n: value of n bytes
 *
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
