#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range-this is the main function
 *
 * It creates an array of numbers
 * @max: the maximum number in the array
 * @min: the minimu number in the array
 * Return:integer 0
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
