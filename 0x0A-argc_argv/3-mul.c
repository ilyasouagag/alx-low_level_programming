#include <stdio.h>
/**
 * _atoi - converts from string to integer
 * @s: string
 *Return: return integer
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
int main(int argc, char **argv)
{
	int mul, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
