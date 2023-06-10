#include <string.h>

/**
 * _strncpy - copies a string from given n bytes
 * @dest: value of first string
 * @src: value of second string
 * @n: value of n bytes
 *
 * Return: concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
