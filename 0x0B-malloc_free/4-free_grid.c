#include "main.h"
/**
 * free_grid - function that returns a pointer to a 2 D array
 * @grid: pointer to matrix
 * @height: height of matrix
 * Return: return null
 */
void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL || height == 0)
		return;
	for (k = 0; k <= height; k++)
		free(grid[k]);
	free(grid);
}
