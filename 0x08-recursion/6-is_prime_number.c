#include "main.h"
/**
 *  is_prime_number - return if a number is prime
 * @n: integer
 * @k: number to check
 * Return: return value
 */
int number(int n, int k);
int is_prime_number(int n)
{
	return (number(n, 2));
}
/**
 *  number - check if a number is prime
 * @n: integer
 * @k: number to check
 * Return: return value
 */
int number(int n, int k)
{
	if (k >= n && n > 1)
		return (1);
	else if (n % k == 0 || n <= 1)
		return (0);
	return (number(n, k + 1));
}
