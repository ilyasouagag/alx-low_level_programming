#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string that separates arguments
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if (separator != NULL && i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	va_end(args);
	printf("\n");
}
