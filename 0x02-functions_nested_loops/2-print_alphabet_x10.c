#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 *
 *
 * Return: none - void
 *
 *
 */
void print_alphabet_x10(void)
{
	int reps = 0;
	int letter = 'a';

	while (reps <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		reps++;
		letter = 'a';
		_putchar(10);
	}
}
