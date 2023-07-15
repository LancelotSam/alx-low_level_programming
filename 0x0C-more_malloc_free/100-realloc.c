#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
	unsigned int i = 0;
	char *new_ptr;
	char *old_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	free(ptr);
	return (new_ptr);
}
