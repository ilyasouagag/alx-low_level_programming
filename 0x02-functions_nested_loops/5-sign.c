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
		return (1);
		_putchar('+');
	} else if (n == 0)
	{
		return (0);
		_putchar('0');
	} else
	{
		return (-1);
		_putchar('-');
	}
}
