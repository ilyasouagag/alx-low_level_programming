#include "main.h"
/**
 * set_bit - sets the value of a bit
 * @n: long number
 * @index: index to change
 * Return: return 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long x = 1;

	if (index > 64)
		return (-1);
	x <<= index;
	*n = *n | x;
	return (1);
}
