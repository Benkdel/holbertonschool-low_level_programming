#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: first value
 * @max: max value
 *
 * Return: pointer to newly created array
 *
 */
int *array_range(int min, int max)
{
	int *arr;
	int size = 0, i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc((size + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min++;
		i++;
	}
	arr[size + 1] = '\0';

	return (arr);
}
