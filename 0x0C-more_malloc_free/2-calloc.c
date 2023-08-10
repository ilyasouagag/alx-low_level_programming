#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to string
 * @b: caractere
 * @n: integer
 * Return: return a pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (p);
}
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

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = (void *)malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	_memset(str, 0, size * nmemb);

	return (str);
}
