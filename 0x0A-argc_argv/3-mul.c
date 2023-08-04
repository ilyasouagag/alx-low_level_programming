#include "main.h"
/**
 * main - executable function
 * @argc: counts the number of arguments
 * @argv: display content of each argument
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int mul = 1;

	if (argc == 1)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		mul = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
