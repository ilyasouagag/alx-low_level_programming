#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly space in memory
 * @str: given string
 * Return: return array
 */

char *_strdup(char *str)
{
	char *p = str;
	int len;
	int i = 0;
	char *array;

	if (str == NULL)
		return (NULL);
	while (*p)
	{
		len++;
		p++;
	}
	array = (char *)malloc(sizeof(char) * len);
	if (array == NULL)
	{
		return (NULL);
	}
	while (str[i] != 0)
	{
		array[i] = str[i];
		i++;
	}
	array[len] = '\0';
	return (array);
}
