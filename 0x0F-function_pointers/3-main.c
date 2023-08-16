#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: return the result of operation
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int (*func)(int, int);
	int a, b, result;

	func = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (!func)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
