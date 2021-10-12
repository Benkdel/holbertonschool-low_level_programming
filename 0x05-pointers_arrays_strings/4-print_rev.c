#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: address of first element of array
 *
 * Return: none - void function
 *
 *
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	while (length > 0)
		_putchar(s[--length]);
	_putchar(10);
}
