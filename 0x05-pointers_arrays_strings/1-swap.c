#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer of the function
 *
 * @b: pointer of the function
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
