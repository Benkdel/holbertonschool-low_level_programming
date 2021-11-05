#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints string followed by new line
 *
 * @separator: print between strings or chars
 * @n: ... variable
 *
 * Return: none - void function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int index;

	va_start(str, n);

	for (index = 0; index < n; index++)
	{
		s = va_arg(str, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar(10);

	va_end(str);
}
