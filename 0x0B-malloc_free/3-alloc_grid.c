#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: row of the array
 * @height: column of the array
 *
 * Return: pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **s, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
