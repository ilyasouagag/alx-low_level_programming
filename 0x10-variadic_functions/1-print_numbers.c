#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed between numbers$
 * @n: count of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
		{
			printf("\n");
			break;
		}
		printf("%s", separator);
		i++;
	}
	printf("\n");
}
