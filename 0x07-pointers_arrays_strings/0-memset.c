#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to string
 * @b: caractere
 * @n: integer
 * Return: return a pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
