#include "main.h"
/**
 * times_table - prints te 9 times table
 *
 * Return: always 0 (Success)
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10 ; i++)
	{
		putchar(0 + '0');
		for (j = 1; j < 10; j++)
		{
			putchar(',');
			putchar(' ');
			k = i * j;
			if (k <= 9)
			{
				putchar(' ');
				putchar(k + 48);
			} else
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
			}
		}
		putchar('\n');
	}
}

