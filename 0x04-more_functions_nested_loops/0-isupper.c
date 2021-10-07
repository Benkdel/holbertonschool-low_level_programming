#include "main.h"

/**
 * _isupper - funct description
 *
 * @c: parameter to evaluate
 * Return: return 1 if c is uppercase,
 * Otherwise, returns 0
 *
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
