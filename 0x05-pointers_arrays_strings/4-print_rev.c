#include "main.h"
/**
 * print_rev - function that prints a string in reverse followed by a new line
 *
 * @s: pointer of the function
 */
void print_rev(char *s)
{
	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{

		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
