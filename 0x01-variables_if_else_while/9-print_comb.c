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
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
