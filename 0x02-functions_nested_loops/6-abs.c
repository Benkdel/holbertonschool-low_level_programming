#include "main.h"
/**
 * _abs - function to return the absolut value of a number
 *
 * @n: The number  to evaluate
 *
 * Return: 1 and prints + if n > the absolute value of n.
 *
 */
int _abs(int n)
{
	return ((n < 0) ? n * -1 : n);
}
