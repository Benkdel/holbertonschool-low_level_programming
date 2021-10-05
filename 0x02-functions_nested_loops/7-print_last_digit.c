#include <stdio.h>
/**
 * print_last_digit - function to return the last digit of a number
 *
 * @n: The number  to evaluate
 *
 * Return: last digit of a number
 *
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	ld = (ld < 0) ? ld * -1 : ld;
	_putchar(ld + '0');
	return (ld);
}
