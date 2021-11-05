#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers passed as ...
 *
 * @separator: print between numbers
 * @n: ... parameter
 *
 * Return: none - void function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int index;

	va_start(lst, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(lst, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar(10);

	va_end(lst);
}
