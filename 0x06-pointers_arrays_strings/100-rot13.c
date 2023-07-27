#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: pointer that point to a string
 *
 * Return: return the pointer
 */
char *rot13(char *str)
{
	char A[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char B[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == A[j])
			{
				str[i] = B[j];
				break;
			}
		}
	}
	return (str);
}
