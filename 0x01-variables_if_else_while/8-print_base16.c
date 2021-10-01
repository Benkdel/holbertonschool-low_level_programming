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
	for (int x = '0'; x <= '9'; x++)
		putchar(x);
	for (int x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar(10);
	return (0);
}
