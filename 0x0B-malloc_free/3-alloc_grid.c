#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - allocate a two dimensional array
 *
 * @width: columns of array
 * @height: rows of array
 *
 * Return: pointer to a two dimensional array
 *
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	if (arr != NULL)
		return (arr);
	else
		return (NULL);
}
