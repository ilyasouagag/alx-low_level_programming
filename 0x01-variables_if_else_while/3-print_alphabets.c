#include <stdio.h>
#include <string.h>
/**
 * main - contain the programm
 *
 * Return: 0 in the main function
 */
int main(void)
{
	char alpha = 'a';
	char betta = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	} while (betta <= 'Z')
	{
		putchar(betta);
		betta++;
	}
	putchar('\n');
	return (0);
}
