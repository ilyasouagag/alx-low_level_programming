#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: return string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = (void *)malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		str[i] = 0;
	}

	return (str);
}
