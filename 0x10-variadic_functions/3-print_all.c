#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}

/**
 * print_int - Prints int
 * @arg: A list pointers to integer to be printed.
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - rints float
 *
 * @arg:arguments pointing to float to be printed.
 *
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
 * print_string - prints a string.
 *
 * @arg: A list of arguments pointing string to be printed.
 *
 *
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - Prints anything
 *
 * @format: A string representing the argument type
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	putchar(10);

	va_end(args);
}
