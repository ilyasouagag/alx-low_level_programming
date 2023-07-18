#include "main.h"
/**
 * times_table - prints te 9 times table
 *
 * Return: always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar((i * j) + '0');
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}

