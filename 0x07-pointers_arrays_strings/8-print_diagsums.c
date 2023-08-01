#include "main.h"
/**
 * print_diagsums - function that printsthe sum of two diagonals
 *
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, sum1 = 0, sum2 = 0;

	while (i < size * size)
	{
		sum1 += a[i];
		i += size + 1;
	}
	while (j <= (size * size) - size)
	{
		sum2 += a[j];
		j += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
