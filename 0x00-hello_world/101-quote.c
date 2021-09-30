#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char err[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(err, 57, 1, stderr);
	fwrite("\n", 2, 1, stderr);
	return (1);
}
