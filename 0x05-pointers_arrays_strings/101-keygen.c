#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	int s;

	srand(time(NULL));
	while (s <= 5423)
	{
		a = rand() % 128;
		s += a;
		putchar(a);
	}
	putchar(4588 - s);
	return (0);
}
