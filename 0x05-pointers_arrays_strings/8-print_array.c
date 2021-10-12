#include <stdio.h>

/**
 * print_array - print n elements of an array
 *
 * @a: array
 * @n: elements to print of array a
 *
 * Return: none - void function
 *
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
			printf("%d, ", a[i++]);
		printf("%d\n", a[i]);
	}
	else
		printf("\n");
}
