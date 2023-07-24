#include "main.h"
/**
 * _strcpy - copies the string from src to dest
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: return the value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

