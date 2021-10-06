#include "main.h"
/**
 * print_times_table - function to print times table to n
 *
 * @n: parameter to set n times tables
 *
 * Return: none - void function
 *
 */
void print_times_table(int n)
{
	int col = 0;
	int row = 0;
	int cents = 0;
	int units = 0;
	int tens = 0;
	int t = 0;

	if (n < 0 || n > 15)
		return;

	while (row <= n)
	{
		while (col <= n)
		{
			t = col * row;
			units = t % 10;
			t = (t - units) / 10;
			tens = t % 10;
			t = (t - tens) / 10;
			cents = t % 10;
			if (col > 0)
			{
				_putchar(' ');
				(cents <= 0) ? _putchar(' ') : _putchar(cents + '0');
				if (cents <= 0)
					(tens <= 0) ? _putchar(' ') : _putchar(tens + '0');
				else
					_putchar(tens + '0');
			}
			_putchar(units + '0');
			if (col < n)
				_putchar(44);
			col++;
		}
		col = 0;
		row++;
		_putchar(10);
	}
}
