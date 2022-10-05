#include "main.h"

/**
 * _strdup - newly allocate space in memory,
 * which contain a copy of a string given as a parameter.
 * @str: a string
 *
 * Return: pointer to newly allocated space in memory.
 */
char *_strdup(char *str)
{
	char *s;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	s = malloc(length * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
