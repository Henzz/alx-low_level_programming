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
	unsigned int count1 = 0, count2 = 0, i = 0, j = 0;
	char *ptr;

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
	if (n < count2)
	{
		count2 = n;
	}
	ptr = malloc((count1 + count2) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count1; i++)
	{
		ptr[i] = s1[i];
	}
	j = 0;
	for (; j < count2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
