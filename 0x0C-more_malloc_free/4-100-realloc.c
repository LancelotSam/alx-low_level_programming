#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc-this is the main function
 *
 * It  reallocates a memory block
 * @ptr:the pointer to the memory block
 * @old_size: the older memory block
 * @new_size: the newer memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, j = 0;

	ptr = malloc(old_size);


	int *new;
	new = malloc(new_size);

	if (new_size > old_size)
	{
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	}
	if (ptr == NULL)
	{
		return (new);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new[j] = ptr[i];
	}
	free(ptr);
}
