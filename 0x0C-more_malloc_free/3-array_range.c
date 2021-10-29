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

	arr = malloc((size) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i <= (max - min))
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
