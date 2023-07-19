#include "main.h"
/**
 * main - the fucntion that will be execute
 *
 * Return: always 0 (Succes)
 */

int main(void)
{
	unsigned long a = 0, b = 1, sum = 0;
	float sum2 = 0;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			sum2 += sum;
		a = b;
		b = sum;
	}
	printf("%.0f\n", sum2);
	return (0);
}
