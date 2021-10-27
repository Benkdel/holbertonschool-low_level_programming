#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grid: two dimensional array
 *
 * @**grid: pointer of pointers
 * @height: number of rows
 *
 * Return: none - void function
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
