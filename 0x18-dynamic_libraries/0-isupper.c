#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: parametre
 *
 * Return: return the value of the function
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
