#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: destination sring
 * @src: source string
 * @n: parameter
 *
 * Return: returns the copied string
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
