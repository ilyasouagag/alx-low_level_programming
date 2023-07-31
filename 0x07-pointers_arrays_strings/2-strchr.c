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
	char *p;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = (s + i);
			return (p);
		}
		i++;
	}
	return (0);
}
