#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 *
 */
int main(void)
{

	char c[8] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(c[x]);
		x++;
	}
	_putchar(10);
	return (0);
}
