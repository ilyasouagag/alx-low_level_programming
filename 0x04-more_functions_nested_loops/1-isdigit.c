#include "main.h"

/**
 * _isdigit - function that checks for uppercase character
 *
 * @c: parametre
 *
 * Return: return the value of the function
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
