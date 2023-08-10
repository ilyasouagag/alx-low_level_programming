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
	void *str;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = (void *)malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	ptr = (char *)str;
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (str);
}
