#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: return 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int number;

	number = 1;
	if (*(char *)&number == 1)
		return (1);
	return (0);
}
