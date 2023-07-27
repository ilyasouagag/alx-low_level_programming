#include "main.h"
/**
 * string_toupper - funcion that changes all lowercase to uppercase
 * @str: pointer that point to a string
 *
 * Return: return the pointer
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

