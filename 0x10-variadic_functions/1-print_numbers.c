#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed between numbers$
 * @n: count of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
		{
			printf("\n");
			break;
		}
		if (separator == NULL)
			continue;
		printf("%s", separator);
	}
	va_end(args);
}
