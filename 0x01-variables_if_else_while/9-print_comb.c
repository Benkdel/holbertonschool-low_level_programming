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
	for (int x = '0'; x < '9'; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
