#include <stdio.h>
/**
 * main - executable function
 * @argc: counts the number of arguments
 * @argv: display content of each argument
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
