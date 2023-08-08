#include "main.h"
/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: pointer to each argument
 * Return: return pointer to result
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int k = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			len++;
			j++;
		}
		len++;
	}
	p = (char *)malloc((sizeof(char) * len) + 1);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			p[k] = av[i][j];
			j++;
			k++;
		}
		p[k] = '\n';
	}
	p[k] = '\0';
	return (p);
}

