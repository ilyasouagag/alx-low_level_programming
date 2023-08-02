#include "main.h"
/**
 * _print_rev_recursion - function that prints a string
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
