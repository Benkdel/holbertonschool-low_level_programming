#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: integer n to print using _putchar
 *
 * Return: none - void function
 *
 *
 */
void print_number(int n)
{
	unsigned int r;

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	r = n;

	if (r / 10)
		print_number(r / 10);
	_putchar(r % 10 + '0');
}
