#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * puts - print string
 * @ptr: string
 */
void _puts(char *ptr)
{
	int i = 0;

	while (ptr[i])
	{
		_putchar(ptr[i]);
		i++;
	}
}
/**
 * print_int - prints integer
 * @n: number
 */
void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, res;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		res = n / div;
		_putchar('0' + res);
	}
}
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
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
