#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main functions
 * @argc: number of arguments
 * @argv: arguments
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int num;
	unsigned char *p = (unsigned char *)main;
	int k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (k = 0; k < num; k++)
	{
		printf("%02x", *p);
		if (k != num - 1)
			printf(" ");
		p++;
	}

	printf("\n");

	return (0);
}
