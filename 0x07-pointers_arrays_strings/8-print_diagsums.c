#include"main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of the 2 diagonals of a squared matrix
 *
 * @a: square matrix
 * @size: size of square matrix
 *
 * Return: none - void function
 *
 */
void print_diagsums(int *a, int size)
{
	int d1, d2;
	int i;

	d1 = 0;
	d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		d2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", d1, d2);
}
