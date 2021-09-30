#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char err[65] = "and that piece of art is useful\" - Dora Korpar, 2015-10";

	fwrite(err, 57, 1, stderr);
	fwrite("-19\n", 5, 1, stderr);
	exit(EXIT_FAILURE);
	return (0);
}
