#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: parameter
 * return: 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (unsigned int *)malloc(b);
	if (p == NULL)
		exit(98);
	return;
}
