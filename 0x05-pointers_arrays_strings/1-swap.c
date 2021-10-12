#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Return: none - void function
 *
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
