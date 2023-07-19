#include "main.h"
/**
 * length - calculate the length of string
 * @n: parameter
 *
 * Return: always 0 (Succes)
 */
int length(int n)
{
	int len = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		len += 1;
	}
	return (len);
}
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i, p;
	unsigned long a = 1, b = 2, sum = 0;
	unsigned long max = 100000000, f1 = 0, f2 = 0, sum2 = 0;

	for (i = 1; i <= 98; i++)
	{
		if (f1 > 0)
			printf("%lu", f1);
		p = length(max) - 1 - length(a);
		while (f1 > 0 && p > 0)
		{
			printf("%d", 0);
			p--;
		}
		printf("%lu", a);
		sum = (a + b) % max;
		sum2 = f1 + f2 + (a + b) / max;
		a = b;
		f1 = f2;
		b = sum;
		f2 = sum2;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

