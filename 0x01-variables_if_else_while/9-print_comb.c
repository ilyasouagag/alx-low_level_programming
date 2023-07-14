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

	while (i < 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('9');
	return (0);
}
