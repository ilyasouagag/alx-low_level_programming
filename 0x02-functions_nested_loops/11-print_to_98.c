#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints the last digit of a number
 *
 * @n: parameter of function
 *
 * Return: always 0 (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for ( ; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for ( ; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
