#include "main.h"

/**
 * print_triangle - function that prints a triangle followed  by a new line
 *
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((i + j) >= n - 1)
				_putchar(35);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
