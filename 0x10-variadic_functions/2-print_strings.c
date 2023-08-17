#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if(str == NULL)
		{
			printf("(nil)");
		}
		if (separator == NULL && str != NULL)
		{
			printf("%s", str);
		}
		else if (separator != NULL && i == 0 && str != NULL)
		{
			printf("%s", str);
		}
		else if (separator != NULL && i != 0 && str != NULL)
		{
			printf("%s%s", separator, str);
		}
	}
	va_end(args);
	printf("\n");
}
