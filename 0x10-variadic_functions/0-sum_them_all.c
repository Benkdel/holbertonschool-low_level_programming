#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - calcs sum of all parameters
 *
 * @n: type of variadic parameters to be received
 *
 * Return: returns sum of all parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	int i, arg, result = 0;

	if (n == 0)
		return (0);

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(lst, int);
		result += arg;
	}
	va_end(lst);

	return (result);
}
