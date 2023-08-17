#include "variadic_functions.h"
/**
 * sum_the_all - function that return sum of all parametres
 * @n: count of parameters
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int x, i, sum;

	i = sum = 0;
	if (n == 0)
		return (0);
	va_list(args);
	va_start(args, n);
	while (i < n)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
