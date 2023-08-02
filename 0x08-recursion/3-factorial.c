#include "main.h"
/**
 *  factorial - function that returns factorial
 * @n: the given number
 * Return: return factoriel
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
		return (n * factorial(n - 1));
}
