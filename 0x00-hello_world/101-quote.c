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
	char err[59] = "and that piece of art is useful\" - Dora Korpar, 2015-1";

	fwrite(err, 57, 1, stderr);
	fwrite("0-19\n", 6, 1, stderr);
	exit(EXIT_FAILURE);
	return (0);
}
