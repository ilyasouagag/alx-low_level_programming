#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: return the result of operation
 */
int main(int argc, char **argv)
{
	int (*func)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(a, b));
	return (0);
}
