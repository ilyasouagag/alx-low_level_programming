#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer that point to a string
 *
 * Return: return the pointer
 */
char *cap_string(char *str)
{
	char s[] = "\n\t ,;.!?'\"(){}";
	int i, j;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (i = 1; str[i] != 0; i++)
	{

		for (j = 0; s[j] != 0; j++)
		{
			if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == s[j])
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
