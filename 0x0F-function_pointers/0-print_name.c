#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: a name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
