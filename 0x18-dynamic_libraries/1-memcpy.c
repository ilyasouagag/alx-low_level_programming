#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer to string dest
 * @src: pointer to string src
 * @n: integer
 * Return: return a pointer to string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
