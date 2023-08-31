#include "main.h"
/**
 * flip_bits - number of bits to flip
 * @n: first number
 * @m: second number
 * Return: return number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
    int count;

    x = n ^ m;
    count = 0;

    while (x)
    {
        count++;
        x &= (x - 1);
    }

    return (count);
}
