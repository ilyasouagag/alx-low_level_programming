#include "main.h"

/**
 * print_triangle - function that prints a triangle followed  by a new line
 *
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) >= size - 1)
				_putchar(35);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
