#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator-this is the main function
 *
 * It iterates an array
 * @array:the aray of integers to be iterated
 * @size:the size of the array
 * @action:the pointer to the void function
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
