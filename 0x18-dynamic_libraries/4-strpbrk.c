#include "main.h"
/**
 * _strpbrk - function that gets the length of a prefix substring
 *
 * @s: input string
 * @accept: string that contains characteres
 * Return: return a pointer to the new string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (0);
}
