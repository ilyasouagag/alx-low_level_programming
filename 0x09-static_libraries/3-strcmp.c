#include "main.h"
/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return a value
 */

int _strcmp(char *s1, char *s2)
{
	int i, sus;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		sus = s1[i] - s2[i];
		if (sus > 0 || sus < 0)
		{
			break;
		}
	}
	return (sus);
}
