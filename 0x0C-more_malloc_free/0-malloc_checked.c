#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked-this is the main function
 *
 * It allocates memory using malloc
 * @b:the unsigned integer to be used as a return
 * Return: A pointer to the allocated memory or 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
