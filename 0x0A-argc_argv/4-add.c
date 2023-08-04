#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 *
 * @s: pointer
 * Return: returns the integer
 *
 * num will enter (number > 0) only if
 *he is a caracter so we will break the loop
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int t = 1;

	do {
		if (*s == '-')
			t *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);
	return (number * t);
}
/**
 * main - executable function
 * @argc: counts the number of arguments
 * @argv: display content of each argument
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (argv[i][0] >= '0' && argv[i][0] <= '9')
		{
			sum += _atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

