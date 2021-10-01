#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: Always 0 (Success)
 *
 *
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
			putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
