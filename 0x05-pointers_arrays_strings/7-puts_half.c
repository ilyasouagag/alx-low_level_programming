#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: pointer
 */
void puts_half(char *str)
{
	char *a = str;
	int len = 0;
	int i = 0;

	while (*a)
	{
		len++;
		a++;
	}
	while (str[i] != '\0')
	{
		if (i > (len - 1) / 2)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
