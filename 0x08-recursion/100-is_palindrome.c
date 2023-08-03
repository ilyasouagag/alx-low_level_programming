#include "main.h"
/**
 * is_palindrome - returns 1 if a string is palindrome
 * @p: pointer
 * @s: pointer to input string
 * Return: return value
 */
int number(char *s, char *p);
int length(char *s);
int is_palindrome(char *s)
{
	char *p = s + length(s) - 1;

	return (number(s, p));
}
/**
 * number - checks if a string is palindrome
 * @s: string
 * @p: pointer to s
 * Return: value
 */
int number(char *s, char *p)
{
	if (*s == '\0')
	{
		return (1);
	}

	else if (*s == *p)
	{
		number(s + 1, p - 1);
	}
	else
	{
		return (0);
	}
}
/**
 * length - calculate the length
 * @s: string
 * Return: return the length
 */
int length(char *s)
{
	int len = 0;

	if (*s != '\0')
		len = len + 1 + length(s + 1);
	return (len);
}
