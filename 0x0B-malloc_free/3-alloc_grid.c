#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 D array
 * @width: width of matrix
 * @height: height of matrix
 * Return: return a matrix
 */
int **alloc_grid(int width, int height)
{
	int **p, i, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (k = 0; k <= i; k++)
				free(p[k]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
