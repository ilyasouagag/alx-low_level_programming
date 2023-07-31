#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: input string
 * @accept: string that contains characteres
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
