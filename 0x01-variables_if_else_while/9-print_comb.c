#include <stdio.h>
#include <string.h>
/**
 * main - contains the code
 *
 * Return: 0 always in main
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 57)
		{
			putchar('9');
		} else
		{
			putchar(i);
			putchar(',');
		}
		putchar(' ');
		i++;
	}
	return (0);
}
