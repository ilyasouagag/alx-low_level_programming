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
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		v = n >> i & 1;
		if (v == 1)
		{
			while (i >= 0)
			{
				_putchar((n >> i & 1) + '0');
				i--;
			}
		}
	}
}
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}