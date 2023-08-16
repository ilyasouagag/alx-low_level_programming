#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: return the result of operation
 */
int main(int argc, char **argv)
{
	int a, b, result;
	char c;
	int (*func)(int, int);

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
	c = *argv[2];
	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
