#include "main.h"
/**
 * print_binary - decimal to binary
 * @n: log decimal
 */
void print_binary(unsigned long int n)
{
	int i;
	int v = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		v = n >> i & 1;
		if (v == 1)
		{
			while (i >= 0)
			{
				putchar((n >> i & 1) + '0');
				i--;
			}
		}
	}
}
