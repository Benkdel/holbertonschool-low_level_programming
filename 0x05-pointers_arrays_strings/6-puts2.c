#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: string to print
 *
 *
 * Return: none - void function
 *
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
