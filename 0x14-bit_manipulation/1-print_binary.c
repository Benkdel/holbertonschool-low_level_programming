#include "main.h"

/**
 * print_binary - print a number in binary
 *
 * @n: decimal representation
 *
 * Return: none - void function
 *
 */
void print_binary(unsigned long int n)
{
	int result;

	if (n >> 1)
		print_binary(n >> 1);

	result = n & 1;
	_putchar(result + '0');
}
