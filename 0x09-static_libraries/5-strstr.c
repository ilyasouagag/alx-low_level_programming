#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 * @haystack: input string
 * @needle: string that contains characteres
 * Return: return the result
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != 0; haystack++)
	{
		char *p = haystack;
		char *pr = needle;

		while (*p == *pr && *pr != '\0')
		{
			pr++;
			p++;
		}
		if (*pr == '\0')
			return (haystack);
	}
	return (NULL);
}
