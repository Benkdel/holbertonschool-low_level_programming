#include "main.h"

/**
 * _pow_recursion - calculate power of a number
 *
 * @x: base number
 * @y: power
 *
 * Return: value of x raised to the power of y
 *
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	result *= _pow_recursion(result, y - 1);

	return (result);
}
