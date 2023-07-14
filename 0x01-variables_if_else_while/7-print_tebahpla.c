#include <stdio.h>
#include <string.h>
/**
 * main - contains the code
 *
 * Return: 0 always in main
 */
int main(void)
{
	char mir = 'z';

	while (mir > 'a')
	{
		putchar(mir);
		mir--;
	}
	putchar('\n');
	return (0);
}
