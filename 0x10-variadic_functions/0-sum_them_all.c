#include "variadic_functions.h"
/**
 * sum_them_all - function that return sum of all parametres
 * @n: count of parameters
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, x;
	va_list args;

	i = 0;
	sum = 0;
	va_start(args, n);
	while (i < n)
	{
		x = va_arg(args, int);
		sum += x;
		i++;
	}
	va_end(args);
	return (sum);
}
