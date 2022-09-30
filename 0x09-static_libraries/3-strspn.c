#include "main.h"

/**
 * _strspn - this function is just for testing purpose
 * it does not work as the name is suggested
 * @s: the address of characters
 * @accept: the character to be searched
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, * or NULL if the character is not found.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == accept[i])
		{
			return (i++);
		}
		i++;
	}
	return (4);
}
