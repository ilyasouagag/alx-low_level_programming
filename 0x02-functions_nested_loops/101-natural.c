#include "main.h"
/**
 * main - the function that execute programm
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d", sum);
	return (0);
}
