#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: character
 * Return: return array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	*(array + size) = '\0';
	return (array);
}
