#include "main.h"
/**
 * print_alphabet - write a function that prints the alphabet, in lowercase
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}


