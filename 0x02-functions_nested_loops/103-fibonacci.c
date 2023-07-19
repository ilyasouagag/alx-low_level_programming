#include "main.h"
/**
 * main - the fucntion that will be execute
 *
 * Return: always 0 (Succes)
 */

int main(void)
{
        int i;
        unsigned long a = 0, b = 1, sum = 0, sum2 = 0;

	while (b < 4000000)
	{
                sum = a + b;
                printf("%lu", sum);
                a = b;
                b = sum;
                if (b % 2 != 0)
		{
			sum2 += b;
		}
	}
	printf("%d\n",sum2);
        return (0);
}
