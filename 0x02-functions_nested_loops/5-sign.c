#include "main.h"
/**
 * print_sign - checks for lowercase character
 *
 * @n: parameter in function
 * Return: always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('1');
	} else if (n == 0)
	{
		_putchar('0');
		_putchar('0');
	} else
	{
		_putchar('-');
		_putchar('1');
	}
}
