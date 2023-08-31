#include "main.h"
/**
 * get_bit - returns the value of a bit at given index
 * @n: number
 * @index: index of byte
 * Return: return bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 0)
		return (-1);
	n >>= index;
	if (n & 1)
		return (1);
	return (0);
}
