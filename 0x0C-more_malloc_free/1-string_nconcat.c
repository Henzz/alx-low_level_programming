#include "main.h"

/**
 * string_nconcat - concates two strings
 * @s1: first char
 * @s2: second char
 * @n: unsigned int type where to select first n bytes of s2
 *
 * Return: pointer to concatinated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count1 = 0, count2 = 0, i = 0, j = 0, size = n;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		count1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		count2++;
		j++;
	}
	if (size < count2)
		count2 = size;
	ptr = malloc((count1 + count2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < count2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
