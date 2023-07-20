#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index-this is the main function
 *
 * It searches for an ineteger
 * @array:the array to be searched
 * @size:the size of the array
 * @cmp:the pointer to our function to search array
 * Return:integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
