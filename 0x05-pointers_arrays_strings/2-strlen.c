#include "main.h"
/**
 * _strlen - return the legnth of a string
 *
 * @s: pointer
 *
 * Return: return len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
