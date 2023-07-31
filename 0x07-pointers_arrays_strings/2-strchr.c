#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer to string
 * @c : character
 * Return: return a pointer to string
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{

			return (p);
		}
		p++;
	}
	return ('\0');
}

