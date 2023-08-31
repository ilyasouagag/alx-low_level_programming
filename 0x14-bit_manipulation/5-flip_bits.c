#include "main.h"
/**
 * flip_bits - number of bits to flip
 * @n: first number
 * @m: second number
 * Return: return number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count = 0;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n ^ m) & 1 << i)
			count++;
	}
	return (count);
}
