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
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar(10);
	return (0);
}