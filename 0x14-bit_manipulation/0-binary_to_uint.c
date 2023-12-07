#include <stddef.h>
#include <stdio.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 *
 * Return: if success the number converted,
 * if failure 0 when there is one or more chars in the string b
 * that is not 0 or 1 and if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0, power = 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}

	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
			result += power;

		power *= 2;
		i--;
	}
	return (result);
}
