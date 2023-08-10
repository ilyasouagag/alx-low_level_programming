#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: parameter
 * exit: cause normal process termination
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (unsigned int *)malloc(b);
	if (p == NULL)
		exit(98);
}
