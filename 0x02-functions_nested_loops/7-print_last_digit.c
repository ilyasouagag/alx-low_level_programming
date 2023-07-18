#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @b: parameter of function
 *
 * Return: always 0 (Success)
 */
int print_last_digit(int b)
{
	int a;

	if (b < 0)
	{
		a = -1 * (b % 10);
	} else
		a = n % 10;
	_putchar(a + '0');
	return (a);
}
