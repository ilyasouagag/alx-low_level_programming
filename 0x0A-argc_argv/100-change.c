#include <stdio.h>
#include <stdlib.h>
/**
 * main - change cents
 * @argc: counts the number of arguments
 * @argv: display arguments
 * Return: return money changed
 */
int main(int argc, char *argv[])
{
	int array[] = {25, 10, 5, 2, 1};
	int i, cents = 0;
	int x = atoi(argv[1]);

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && x >= 0; i++)
	{
		while (x >= array[i])
		{
			cents++;
			x -= array[i];
		}
	}
	printf("%d\n", cents);
	return (0);
}

