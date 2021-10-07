#include "main.h"

/**
 * _isdigit - function to check if parameter passed is digit
 *
 * @c: parameter to evlauate
 * Return: 1 if c is a digit
 * Otherwise, returns 0
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
