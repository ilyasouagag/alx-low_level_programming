#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	Char string[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(string[ch]);
	_putchar('\n');

	return (0);
}
