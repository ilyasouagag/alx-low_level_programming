#include "main.h"
/**
 * _strcat - function that concatenates two  strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: return the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int j = 0, i, n;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

