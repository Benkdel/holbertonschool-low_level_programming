#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: lower limit
 *
 * Return: none - void function
 *
 */
void print_to_98(int n)
{
	int upper = 98;
	int units = 0;
	int tens = 0;

	while (n <= upper)
	{
		if (n < 10)
			_putchar(n + '0');
		else
		{
			units = n % 10;
			tens = (n - units) / 10;
			_putchar(tens + '0');
			_putchar(units + '0');
		}
		if (n < upper)
		{
			_putchar(44);
			_putchar(' ');
		}
		n++;
	}
	_putchar(10);
}
