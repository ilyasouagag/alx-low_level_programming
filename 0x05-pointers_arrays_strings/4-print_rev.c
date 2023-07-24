#include "main.h"
/**
 * print_rev - function that prints a string in reverse followed by a new line
 *
 * @s: pointer of the function
 */
void print_rev(char *s)
{

	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	s--;
	while (*s)
	{

		putchar(*s);
		s--;
	}
}
