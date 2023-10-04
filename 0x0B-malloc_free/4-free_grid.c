#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid array of integers
 * @grid: grid of the array
 * @height: column of the array
 *
 * Return: pointer to the 2 dimensional array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
