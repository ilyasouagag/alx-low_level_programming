#include "main.h"
/**
 * main - the fucntion that will be execute
 *
 * Return: always 0 (Succes)
 */

int main(void)
{
	int i;
	unsigned long a = 0, b = a, sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%lu\n", sum);
		a = b;
		b = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
}
