#include <stdio.h>
/**
 * main - executable function
 * @argc: counts the number of arguments
 * @argv: display content of each argument
 * Return: return 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
