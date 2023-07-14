#include <stdio.h>
#include <string.h>
/**
 * main - conatains the programm
 *
 * Return: 0 in main
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
