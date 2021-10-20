#include "main.h"

/**
 * factorial - computes factorial of n
 *
 * @n: int to calculate factorial of
 *
 * Return: int with the result of factorial of n
 *
 */
int factorial(int n)
{
	int result = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	result = n * factorial(n - 1);

	return (result);
}
