#include "main.h"
/**
 * binary_to_uint - converts a binary numbere to unsigned
 * @b: pointer to string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k = 0;
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			x = x | (1 << k);
		k++;
	}
	return (x);
}
