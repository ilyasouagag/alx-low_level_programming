#include "variadic_functions.h"
/**
 * sum_the_all - function that return sum of all parametres
 * @n: count of parameters
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, x;

	i = 0;
	sum = 0;
	if (n == 0)
		return (0);
	va_list(args);
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
