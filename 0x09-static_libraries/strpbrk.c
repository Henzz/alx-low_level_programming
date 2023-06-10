#include "main.h"
#include <string.h>

/**
 * _strpbrk - copies the string pointed to by src, including the
 * terminationg null byte(\0), to the buffer pointed to by dest
 * @s: array to copy to
 * @accept: array of characters
 *
 * Return: pointer to dest.
 */
char *_strpbrk(char *s, char *accept)
{
	strcpy(s, accept);
	return (s);
}
