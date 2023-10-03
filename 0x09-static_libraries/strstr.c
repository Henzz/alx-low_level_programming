#include "main.h"
#include <string.h>

/**
 * _strstr - copies the string pointed to by src, including the
 * terminationg null byte(\0), to the buffer pointed to by dest
 * @haystack: array to copy to
 * @needle: array of characters
 *
 * Return: pointer to dest.
 */
char *_strstr(char *haystack, char *needle)
{
	strcpy(haystack, needle);
	return (haystack);
}
