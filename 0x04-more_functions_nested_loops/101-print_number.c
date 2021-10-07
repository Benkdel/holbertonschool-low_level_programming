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
	int nDigits = -1;
	int reverseNumber = 0;
	int m = n;
	int decimalPos = 1;
	int i, isneg = 0;

	if (n < 0)
	{
		n *= -1;
		isneg = 1;
	}
	if (n == 0)
		_putchar('0');
	while (m != 0)
	{
		m /= 10;
		nDigits++;
	}
	while (n != 0)
	{
		for (i = 0; i < nDigits; i++)
			decimalPos *= 10;
		nDigits--;
		reverseNumber += (n % 10) * decimalPos;
		n /= 10;
		decimalPos = 1;
	}
	while (reverseNumber != 0)
	{
		if (isneg == 1)
		{
			_putchar(45);
			isneg = 0;
		}
		_putchar((reverseNumber % 10) + '0');
		reverseNumber /= 10;
	}
}
