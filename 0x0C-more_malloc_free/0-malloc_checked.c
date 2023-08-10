#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: parameter
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
