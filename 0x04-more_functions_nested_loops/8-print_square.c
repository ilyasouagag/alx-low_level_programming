#include "main.h"

/**
 * print_square - function that prints a square followed  by a new line
 *
 * @size: parameter
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(-13 + '0');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
