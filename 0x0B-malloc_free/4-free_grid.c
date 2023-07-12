#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid-this is the main function
 *
 * It returns a pointer to a 2 dimensional array of int
 * @width: the widthe of the array
 * @height: the height of the array
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int h = 0;
	int i = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)/*memry allocation for all rows *height*/
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(**grid) * width);
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)/*free previously allocated*/
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
