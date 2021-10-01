#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: always 0 (Success)
 *
 *
 */
int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar(10);
	return (0);
}
