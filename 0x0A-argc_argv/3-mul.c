#include <stdio.h>
/**
 * _atoi - converts from string to integer
 * @s: string
 *Return: return integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	} else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}

/**
 * main - executable function
 * @argc: counts the number of arguments
 * @argv: display content of each argument
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	mul = _atoi(argv[1]) + _atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
