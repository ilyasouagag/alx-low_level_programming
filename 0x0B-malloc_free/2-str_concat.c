#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: return array
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *s3;

	while (s1 && s1[len1] != 0)
		len1++;
	while (s2 && s2[len2] != 0)
		len2++;
	s3 = (char *)malloc((sizeof(char)) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != 0)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != 0)
		{
			s3[i + j] = s2[j];
			j++;
		}
	}
	s3[len1 + len2] = '\0';

	return (s3);
}


