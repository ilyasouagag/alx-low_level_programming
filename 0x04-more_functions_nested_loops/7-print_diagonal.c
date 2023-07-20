#include "main.h"

/**
 * print_diagonal - function that darws a diagonal line on the terminal
 *
 * @n: parameter
 */
void print_diagonal(int n)
{
	int i, j, k = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		k++;
		for (j = 0; j < k; j++)
		{
			_putchar(' ');
		}
	}
	if (n == 0)
		_putchar('\n');
}

