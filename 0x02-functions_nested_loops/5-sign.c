#include <stdio.h>
/**
 * print_sign - function to print the sign of a number
 *
 * @c: The character to evaluate
 *
 * Return: 1 and prints + if n > 0.
 * Otherwise, if n = 0, return 0 and print 0.
 * Otherwise, return -1 and print -.
 *
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return 0;
	}
	else if (n > 0)
	{
		_putchar(43);
		return 1;
	}
	else
	{
		_putchar(45);
		return -1;
	}
}
