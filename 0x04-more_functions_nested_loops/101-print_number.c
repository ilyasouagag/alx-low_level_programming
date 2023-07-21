#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: input value
 */
void print_number(int n)
{
	int m = n;

	if (m  < 0)
	{
		_putchar('-');
	}
	if ((m / 10) > 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
