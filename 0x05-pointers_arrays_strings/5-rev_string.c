#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: pointer
 */
void rev_string(char *s)
{
	int i = 0, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	printf("%d", len);
	while (i < len / 2)
	{
		char temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
		i++;
	}
}
