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
	p = (int **)calloc(height, sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)calloc(width, sizeof(int));
		if (p[i] == NULL)
		{
			free(p);
			for (k = 0; k <= i; k++)
				free(p[k]);
			return (NULL);
		}
	}

	return (p);
}
