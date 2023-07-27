#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int i = 0;
	int j = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	while (n > 0)
	{
		j = n % 10;
		n = n / 10;
		i = (i * 10) + j;
	}
	while (i > 0)
	{
		_putchar((i % 10) + '0');
		
		i = i / 10;
	}
}
