#include "main.h"
/**
 * sum_natural - adds two integers and returns the result
 *
 * Return: always 0 (Success)
 */
void sum_natural(void)
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
}
