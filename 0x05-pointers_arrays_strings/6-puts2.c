#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: pointer
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
		if (*str == '\0' && *(str - 1) != '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
