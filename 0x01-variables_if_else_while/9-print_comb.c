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
	int x;

	for (x = '0'; x < '9'; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
