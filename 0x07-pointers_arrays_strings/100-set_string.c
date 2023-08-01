#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s:pointer
 * @to:string
 * because *to is a string ans **s pointer so *s=to;
 */

void set_string(char **s, char *to)
{
	*s = to;
}
