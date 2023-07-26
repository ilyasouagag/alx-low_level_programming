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
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	if (n < len)
	{
		for (j = n; dest[j] != '\0'; j++)
		{
		}
	}
	dest[j] = '\0';
	return (dest);
}
