#include <stdio.h>
#include <string.h>
/**
 * main - contains the code
 *
 * Return: 0 always in main
 */
int main(void)
{
	int i, j, k, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (m = j + 1; m <= 9; m++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(m + '0');
					if (i == 9 && j == 8 && k == 8 && m == 9)
					{
						putchar('\n');
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
