#include "main.h"

/**
 * array_range - creates an array of integers from given ranges
 * @min: int type and starting point
 * @max: int type and ending point
 *
 * Return: pointer to an array.
 */
int *array_range(int min, int max)
{
	int *ptr, i;
	int start, count = 0;

	start = min;
	if (min > max)
		return (NULL);
	while (start <= max)
	{
		count++;
		start++;
	}
	ptr = malloc(count * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		ptr[i] = 0;
	}
	start = min;
	i = 0;
	while (start <= max)
	{
		ptr[i] = start;
		start++;
		i++;
	}
	return (ptr);
}
