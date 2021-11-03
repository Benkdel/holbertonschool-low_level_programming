#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: array of elements to search in
 * @size: size of array
 * @cmp: pointer to function to compare
 *
 * Return: index of number found
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0, i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			index = i;
			break;
		}
	}
	return (index);
}
