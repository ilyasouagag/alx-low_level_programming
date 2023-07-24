#include "main.h"
/**
 * print_rev - function that prints a string in reverse followed by a new line
 *
 * @s: pointer of the function
 */
void print_rev(char *s)
{
	int a = _strlen(s);
	int i;

	for (i = a; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
