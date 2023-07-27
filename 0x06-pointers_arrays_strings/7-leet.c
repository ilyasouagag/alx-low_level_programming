#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: pointer that point to a string
 *
 * Return: return the pointer
 */
char *leet(char *str)
{
	char alph[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; alph[j] != 0; j++)
		{
			if (str[i] == alph[j] || str[i] == alph[j] + 32)
				str[i] = '0' + val[j];
		}
	}
	return (str);
}
