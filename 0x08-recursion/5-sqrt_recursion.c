#include "main.h"

int _act_sqrt_rec(int n, int i);

/**
 * _sqrt_recursion - compute natural sqr root of a number
 *
 *@n: number to calculate the sqr root of
 *
 *Return: int with sqr root of n
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_act_sqrt_rec(n, 0));
}


/**
 * _act_sqrt_rec - compute natural sqr root of a number
 *
 * @n: number to calculate the sqr root of
 *
 * Return: int with sqr root of n
 *
 */
int _act_sqrt_rec(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_act_sqrt_rec(n, i + 1));
}
