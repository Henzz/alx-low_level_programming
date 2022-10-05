#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: newly allocated space in memory which contains s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int lengthS1, lengthS2, sum, i, j;

	lengthS1 = strlen(s1);
	lengthS2 = strlen(s2);
	sum = lengthS1 + lengthS2;
	s = malloc(sum * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lengthS1; i++)
	{
		if (s1 == NULL)
		{
			s[i] = ' ';
		}
		else
		{
			s[i] = s1[i];
		}
	}
	j = 0;
	while (j < lengthS2)
	{
		if (s2 == NULL)
		{
			s[i] = ' ';
		}
		else
		{
			s[i] = s2[j];
		}
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}