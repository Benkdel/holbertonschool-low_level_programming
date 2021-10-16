#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: number to be printed
 *
 * Return: none - Void function
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
