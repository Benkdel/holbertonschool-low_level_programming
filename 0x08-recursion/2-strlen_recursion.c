#include "main.h"


/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to evaluate
 *
 * Return: return int length of string s
 *
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len += _strlen_recursion(++s);
	len++;

	return (len);
}
