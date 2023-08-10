#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: indicates how many letters we will concatenate
 * Return: return string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, j = 0;
	char *s3;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		while (s1[len1])
			++len1;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		while (s2[len2])
			++len2;
	}
	if (len2 > n)
		len2 = n;
	s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		s3[j + len1] = s2[j];
		j++;
	}
	s3[len1 + len2] = '\0';
	return (s3);
}
