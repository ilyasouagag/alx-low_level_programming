#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer that point to a string
 *
 * Return: return the pointer
 */
char *cap_string(char *str)
{
	int sus, i, j;

	char s[] = {' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};
	sus = 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'i' && str[i] <= 'z')
		{
			str[i] = str[i] - sus;
		}
		sus = 0;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == str[i])
			{
				sus = 32;
				break;
			}
		}
	}
	return (str);
}

