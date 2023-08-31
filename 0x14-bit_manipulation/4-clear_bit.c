#include "main.h"
/**
 * clear_bit - sets the value of bit to 0
 * @n: long number
 * @index: index to clear
 * Return: return 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 64)
		return (-1);
	x <<= index;
	x = ~x;
	*n = *n & x;
	return (1);
}
