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
	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
