#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: parameter
 */
void print_line(int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
