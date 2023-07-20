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
 * nb_premier - function that determine if a number is prime or not
 *
 * @n: parameter
 *
 * Return: return if the number is prime or not
 */
int nb_premier(long long int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	for (long long int i = 2; i <= square(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
}
	return (1);
}
/**
 * main - return the largest prime factor
 *
 * Return: always 0 in main
 */

int main(void)
{
	long long int num = 612852475143;
	long long int larg_num_fac = 1;

	for (long long int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			OA
			if (nb_premier(i))
			{
				larg_num_fac = i;
			}
			while (num % i == 0)
			{
				num /= i;
			}
		}
	}
	if (num > 1)
	{
		larg_num_fac = num;
	}
	printf("The largest prime factor is %lld\n", larg_num_fac);
	return (0);
}
