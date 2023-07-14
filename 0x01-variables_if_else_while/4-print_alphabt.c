#include <stdio.h>
#include <string.h>
/**
 * main - contains the code
 *
 * Return: 0 always in main
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
