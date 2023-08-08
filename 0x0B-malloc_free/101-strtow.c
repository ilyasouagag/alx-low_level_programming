#include "main.h"
/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: return pointer to result
 */
char **strtow(char *str)
{
	if (str == NULL || str == "")
		return (NULL);
	char **p;
	int j, k, i = 0;
	int len = 0;

	while (str[i] != 0)
	{
		int x = 0;

		if (str[i] != ' ')
		{
			if (str[i + 1] == ' '  || str[i + 1] == 0)
				x = 1;
			len++;
		}
		if (x == 1)
			len++;
		i++;
		len++;
	}
	p = (char **)malloc((sizeof(char *) * len) + 1);
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 0; str[i] != 0; i++)
	{
		j = 0;
		while (str[i] != ' ')
		{
			p[k][j] = str[i];
			j++;
			i++;
		}
		p[k][j] = '\0';
		k++;
	}
	p[k] = NULL;
	return (p);
}
