#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: character
 * Return: return array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	*array = c;

	return (array);
}

