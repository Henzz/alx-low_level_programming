#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminationg null byte(\0), to the buffer pointed to by dest
 * @dest: array to copy to
 * @src: array of characters
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
