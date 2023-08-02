#include "main.h"
/**
 *  _sqrt_recursion - returns root
 * @n: integer
 * @k: square root
 * Return: return value
 */
int racine(int n, int k);
int _sqrt_recursion(int n)
{
	return (racine(n, 1));
}
/**
 * racine - calculate the sqrt
 * @n: input integer
 * @k: root of n
 * Return: return value
 */
int racine(int n, int k)
{
	if (k * k == n)
		return (k);
	else if (k * k < n)
		return (racine(n, k + 1));
	return (-1);
}
