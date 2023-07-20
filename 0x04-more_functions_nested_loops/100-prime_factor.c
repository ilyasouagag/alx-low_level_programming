#include <stdio.h>

/**
 * square - calculate square of number
 *
 * @a: number
 *
 * Return: return the square
 */
double square(double a)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 * lar_prime_fac - function that determine if a number is prime or not
 *
 * @num: parameter
 */
void lar_prime_fac(long int num)
{
	int i, lar;

	while (num % 2 == 0)
		num = num / 2;
	for (i = 3; i <= square(num); i += 2)
	{
		while (num % i == 0)
		{
			num = num / i;
			lar = i;
		}
	}
	if (num > 2)
		lar = num;
	printf("%d\n", lar);
}
/**
 * main - return the largest prime factor
 *
 * Return: always 0 in main
 */

int main(void)
{
	lar_prime_fac(612852475143);

	return (0);
}
