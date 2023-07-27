#include "main.h"
/**
 * reverse_array - function that reverses an array of integers
 *
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp;

		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

