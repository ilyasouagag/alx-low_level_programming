#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: first number
 * @max: second number
 * Return: return array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
