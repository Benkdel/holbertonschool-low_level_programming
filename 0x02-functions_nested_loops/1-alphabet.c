#include "main.h"
/**
 * print_alphabet - uses putchar and whileloop tu print alphabet in lower case
 *
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_alphabet(void)
{

	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar(10);
}
