#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @ch:characters
 *
 * Return: uppercase letters of string.
 */
char *string_toupper(char *ch)
{
	int j = 0;

	while (ch[j])
	{
		ch[j] = toupper(ch[j]);
		j++;
	}
	return (ch);
}
