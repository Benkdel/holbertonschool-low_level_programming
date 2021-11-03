#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes function by pointer for every elem of array
 *
 * @array: pointer to an array of ints
 * @size: size of array
 * @action: pointer to function to be used
 *
 * Return: none - void function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		return;
	if (action == NULL)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
